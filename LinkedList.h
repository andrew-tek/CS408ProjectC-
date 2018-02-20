/*
 * LinkedList.h
 *
 *  Created on: Feb 19, 2018
 *      Author: Andrew Tek
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "Node.h"

class LinkedList {
private:
	int size;
public:
	Node *head;
public:
	LinkedList();
	void addToBeginning(string str);
	bool contains (string s);
	void printList();
	int getSize();
	Node * getHead();
	void setHead(Node h);
	LinkedList operator + (LinkedList list);
	LinkedList operator * (LinkedList list);
	LinkedList operator - (LinkedList list);

};

#endif /* LINKEDLIST_H_ */
