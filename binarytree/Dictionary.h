#pragma once
#include <string>

class Dictionary {
public:
	//Dictionary(Type KEY, Type VALUE) {
	//	this->key = KEY;
	//	this->value = VALUE;
	//}
	void input();
	void output();
	void change();
	void Delete();
	//std::string key = "NULL", value = "NULL";
	int key;
	std::string value;
};

