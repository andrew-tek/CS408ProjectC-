/*
 * Node.h
 *
 *  Created on: Feb 19, 2018
 *      Author: Andrew Tek
 */

#ifndef NODE_H_
#define NODE_H_

#include <iostream>

using namespace std;

class Node {
public:
	string value;
	Node *next;
public:
	Node();
	Node (string v);
	string  getValue();
	Node getNext();
	void setValue (string str);
	void setNext (Node n);
};

#endif /* NODE_H_ */
