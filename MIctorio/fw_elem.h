#pragma once
#include <iostream>
#include <map>

namespace fw {
	extern std::map<std::string, std::string> read(const char* path);
	extern void upt(const char* path, std::map<std::string, std::string>);
	extern std::string correct_path(std::string);
	extern void buildPth(std::string);
	//experimental thing 
	template <typename... T>
	extern std::string build_path(T... args);
}