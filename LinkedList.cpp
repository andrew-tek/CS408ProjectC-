/*
 * LinkedList.cpp
 *
 *  Created on: Feb 19, 2018
 *      Author: Andrew Tek
 */

#include "LinkedList.h"

LinkedList::LinkedList() {
	size = 0;
	head = NULL;

}



void LinkedList::addToBeginning(string str) {
    Node *iterator =new Node;
    iterator -> value = str;
    iterator -> next = head;
    head = iterator;
    size++;
	}
bool LinkedList::contains (string s) {
	Node *iterator = new Node;
	iterator = head;
	while (iterator != NULL) {
		if (iterator -> value == s) {
			return true;
		}
		iterator = iterator -> next;
	}
	return false;
}
void LinkedList::printList() {
	Node *it = new Node;
	it = head;
	while (it != NULL) {
		cout << it -> value << "   ";
		it = it -> next;
	}
}
int LinkedList::getSize() {
	return size;
}
Node *LinkedList::getHead() {
	return head;
}
void LinkedList::setHead(Node h) {
//	head = h;
}

LinkedList LinkedList::operator + (LinkedList list) {
	LinkedList solution;
	Node *iterator = new Node;
	iterator = head;
	for (int i = 0; i < size; i++) {
		solution.addToBeginning(iterator -> value);
		iterator = iterator -> next;
	}
	iterator = list.head;
	for (int i = 0; i < list.getSize(); i++) {
		if (!solution.contains(iterator -> value)) {
			solution.addToBeginning(iterator -> value);
			iterator = iterator -> next;
		}
	}

	return solution;
}

LinkedList LinkedList::operator * (LinkedList list) {
	LinkedList solution;
	Node *iterator = new Node;
	iterator = head;
	for (int i = 0; i < size; i++) {
		if (list.contains(iterator -> value)) {
			solution.addToBeginning(iterator -> value);
		}
		iterator = iterator -> next;
	}
	return solution;
}

LinkedList LinkedList::operator - (LinkedList list) {
	LinkedList solution;
	Node *iterator = new Node;
	iterator = head;
	for (int i = 0; i < size; i++) {
		if (!list.contains(iterator -> value)) {
			solution.addToBeginning(iterator -> value);
		}
		iterator = iterator -> next;
	}
	return solution;
}
