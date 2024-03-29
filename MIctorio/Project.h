#pragma once
#define PRJ_FNAME "index.prj"
#define SRC_DNAME "src"
#define OUT_DNAME "out"
#define SPRITES_DNAME "spts"

#include <iostream>
#include <map>
#include "DataRaw.h"
#include <fstream>
#include "component.h"
#include <vector>

class Project {
public:
	//foreground component
	component_t* fg_c = nullptr;

	std::string name;
	std::string ver;
	std::string author;
	std::string info;
	bool open(std::string);
	bool create(std::string);

	void upt();
	void compile();

	Project();
	
	std::vector<component_t*> comp;

	void newCmp(e_component_type);
	bool rmCmp(std::string);
	bool rmCmpByPath(std::string);
	void addCmp(std::pair<std::string, std::string>);
	void addCmp(component_t*);

	void openFG(component_t*);
	uint8_t openFG(std::string);
	bool isOpen();

	bool rept(std::string, std::string);

	std::string pth();
private:
	void loadDataRaw();

	void removeComp(size_t);
	bool opened = false;
	std::string projectPath;
	std::string info_file_path;
	std::string fstr;

	std::map<std::string, std::string> genDef(e_component_type);
};