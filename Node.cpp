/*
 * Node.cpp
 *
 *  Created on: Feb 19, 2018
 *      Author: Andrew Tek
 */

#include "Node.h"
#include <iostream>

using namespace std;
Node::Node() {
	value = "";
	next = NULL;

}

Node::Node (string v) {
	value = v;
	next = NULL;
}
string  Node::getValue() {
	return value;
}
Node Node::getNext() {
	return *next;
}
void Node::setValue (string str) {
	value = str;
}
void Node::setNext (Node n) {
	*next = n;
}

