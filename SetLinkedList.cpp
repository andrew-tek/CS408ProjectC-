/*
 * SetLinkedList.cpp
 *
 *  Created on: Feb 19, 2018
 *      Author: Andrew Tek
 */

#include "SetLinkedList.h"

SetLinkedList::SetLinkedList() {
	// TODO Auto-generated constructor stub
}

LinkedList SetLinkedList::unionList (LinkedList list1, LinkedList list2) {
	LinkedList solution;
	Node *iterator = new Node;
	iterator = list1.head;
	for (int i = 0; i < list1.getSize(); i++) {
		solution.addToBeginning(iterator -> value);
		iterator = iterator -> next;
	}

	iterator = list2.head;
	for (int i = 0; i < list2.getSize(); i++) {
		if (!solution.contains(iterator -> value)) {
			solution.addToBeginning(iterator -> value);
			iterator = iterator -> next;
		}
	}

	return solution;
}
LinkedList SetLinkedList::intersect (LinkedList list1, LinkedList list2) {
	LinkedList solution;
	Node *iterator = new Node;
	iterator = list1.head;
	for (int i = 0; i < list1.getSize(); i++) {
		if (list2.contains(iterator -> value)) {
			solution.addToBeginning(iterator -> value);
		}
		iterator = iterator -> next;
	}
	return solution;
}

LinkedList SetLinkedList::difference (LinkedList list1, LinkedList list2) {
	LinkedList solution;
	Node *iterator = new Node;
	iterator = list1.head;
	for (int i = 0; i < list1.getSize(); i++) {
		if (!list2.contains(iterator -> value)) {
			solution.addToBeginning(iterator -> value);
		}
		iterator = iterator -> next;
	}
	return solution;
}


