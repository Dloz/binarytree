// binarytree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Node.h"
#include "Dictionary.h"



int CountBranches(Node*, int);


int main() {
	Node *Root = NULL;
	std::string inputStr;
	int lvl;
	char option;
	Dictionary inputDict;
	do	{
		system("cls");
		std::cout << "1 - Add\n2 - Show\n3 - Search\n4 - Exit\nMy choice: ";
		
		std::cin >> option;
		switch (option)	{
			case '1': {
				inputDict.input();
				if (Root != NULL)
					Root->Add(inputDict);
				else
					Root = new Node(inputDict);
			}break;

			case '2': {
				std::cout << "Current tree (straight bypass): ";
				if (Root != NULL)
					Root->Show();
				std::cout << std::endl;
				system("PAUSE");
			}break;

			case '3': {
				//std::cout << "Input level: ";
				//std::cin >> lvl;
				//std::cout << "Branches of lvl " << lvl << " is " << CountBranches(Root, lvl) << std::endl;
				//
				int keyToSearch;
				std::cout << "Input key to search - "; 
				std::cin >> keyToSearch;
				if (Root->find(keyToSearch))
					Root->find(keyToSearch)->output();
				else
					std::cout << "Have no compares";
				std::cout << std::endl;
				system("PAUSE");
			}break;
			default: 
				std::cout << "Wrong!" << std::endl;
				break;
		}
	} while (option != '4');
}

int CountBranches(Node* Root, int lvl) {
	int i = 0;
	Root->BranchCount(-1, i, lvl);
	return i;
}

