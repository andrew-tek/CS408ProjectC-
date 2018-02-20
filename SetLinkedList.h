/*
 * SetLinkedList.h
 *
 *  Created on: Feb 19, 2018
 *      Author: Andrew Tek
 */

#ifndef SETLINKEDLIST_H_
#define SETLINKEDLIST_H_
#include "LinkedList.h"

class SetLinkedList {
public:
	SetLinkedList();
	LinkedList unionList (LinkedList list1, LinkedList list2);
	LinkedList intersect (LinkedList list1, LinkedList list2);
	LinkedList difference (LinkedList list1, LinkedList list2);
};

#endif /* SETLINKEDLIST_H_ */
