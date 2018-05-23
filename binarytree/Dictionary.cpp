//#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include "Dictionary.h"
#include "Node.h"
#include <iomanip>
#include <iostream>
#include <cstdio>



void Dictionary::input() {
	std::cout << "Input key - "; std::cin >> key;
	std::cout << "Input value - "; std::getline(std::cin, value);
	
}

void Dictionary::output() {
	std::cout << key << ':' << value << std::endl;
}

void Dictionary::change() {
	int k;
	std::cout << "What would you like to change?\n1.key\n2.value\n?" << std::endl;
	std::cin >> k;
	switch (k)	{
	case 1:
		std::cout << "Enter new key - "; std::cin >> key; break;
	case 2:
		std::cout << "Enter new value - "; std::cin >> value; break;
	default:
		std::cout << "You've choosed wrong number!" << std::endl;
		break;
	}
}

void Dictionary::Delete() { // clever delete
	key = NULL;
	value = "";
}
