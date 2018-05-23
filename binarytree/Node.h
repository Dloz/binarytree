#pragma once
#include <iostream>
#include <string>
#include "Dictionary.h"

class Node {


public:

	Dictionary field;
	Node* left, *right;

	Node(Dictionary STR) {
		field = STR;
		left = right = NULL;
	}

	void Add(Dictionary STR) {
			if (field.key != STR.key) {
				if (field.key < STR.key) {
					if ((int)right != NULL)
						right->Add(STR);  
					else
						right = new Node(STR);
				}
				else {
					if ((int)left != NULL)
						left->Add(STR);
					else
						left = new Node(STR);
				}
				return;
			}
	}

	void Show() {
		std::cout << field.value << ' ';
		if ((int)left != NULL)
			left->Show();
		if ((int)right != NULL)
			right->Show();
	}

	void BranchCount(int currentLvl, int &counter, int &request) {
		if (++currentLvl == request)
			counter++;
		if ((int)left != NULL)
			left->BranchCount(currentLvl, counter, request);
		if ((int)right != NULL)
			right->BranchCount(currentLvl, counter, request);
	}

	Dictionary* find(int d) {
		if (field.key == NULL) {
			return NULL;
		}
		if (field.key == d) {
			return &field;
		}

		if (d <= field.key) {
			if (left->field.key != NULL)
				return find(d);  // рекурсия
			else
				return NULL;
		}
		else {
			if (right)
				return find(d);
			else
				return NULL;
		}
		return NULL;
	}
};