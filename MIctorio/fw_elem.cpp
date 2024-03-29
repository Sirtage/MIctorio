#include "fw_elem.h"
#include <vector>
#include <direct.h>
#include <fstream>

std::map<std::string, std::string> fw::read(const char* path) {
	std::ifstream f;
	f.open(path);
	if (!f.is_open()) {
		std::ofstream of;
		of.open(path);
		of.close();
		f.open(path);
	}

	char buf;
	std::string line;
	while (f.read(&buf, sizeof(buf)))
	{
		line += buf;
	}

	std::map<std::string, std::string> set = std::map<std::string, std::string>();
	std::string s1 = "", s2 = "";
	for (int i = 0; i < line.length(); i++) {
		if (line[i] == '\n') {
			continue;
		}
		else if (line[i] == '@') {
			i++;
			for (i; i < line.length(); i++) {
				if (line[i] == '\n') {
					continue;
				}
				else if (line[i] == ';') {
					set[s1] = s2;
					s1 = ""; s2 = "";
					break;
				}
				else {
					s2 += line[i];
				}
			}
		}
		else {
			s1 += line[i];
		}
	}

	return set;
}

void fw::upt(const char* path, std::map<std::string, std::string> set) {
	std::ofstream of;
	of.open(path);
	std::string lines;
	for (std::pair<std::string, std::string> pr : set) {
		lines += pr.first + "@" + pr.second + ";\n";
	}

	of << lines;
	of.close();
}

std::string fw::correct_path(std::string str) {
	return str[str.length() - 1] == '/' ? str : str + '/';
}

template <typename... T> 
std::string fw::build_path(T... args) {
	if (T == std::string) {
		std::string line;
		std::vector<std::string> vec = { args };
		for (std::string str : vec) {
			line += str + "/";
		}
		return line;
	}
	return NULL;
}

void fw::buildPth(std::string str) {
	std::string dirn;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '/') {
			_mkdir(dirn.c_str());
		}
		dirn += str[i];
	}
}