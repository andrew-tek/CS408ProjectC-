#include <iostream>
#include <list>
#include "Node.h"
#include "LinkedList.h"
#include "SetLinkedList.h"

using namespace std;

bool containsInList(list <string> list, string value) {
	for (string str : list) {
		if (str == value) {
			return true;
		}
	}
	return false;
}



list <string> unionSet (list <string> listOne, list <string> listTwo) {
	list <string> solution;
	for (string str : listOne) {
		solution.push_front(str);
		}
	for (string str: listTwo) {
		if (!containsInList(solution, str)) {
			solution.push_front(str);
		}
	}
	return solution;
}

list <string> intersection (list <string> listOne, list <string> listTwo) {
	list <string> solution;
	for (string str : listOne) {
		if (containsInList(listTwo, str)) {
			solution.push_front(str);
		}
	}
	return solution;
}

list <string> difference (list <string> listOne, list <string> listTwo) {
	list <string> solution;
	for (string str : listOne) {
		if (!containsInList(listTwo, str)) {
			solution.push_front(str);
		}
	}
	return solution;
}


int main() {
	list <string> l1;
	l1.push_front("test");
	l1.push_front("hello again");

	list <string> l2;

	l2.push_front("test");
	l1.push_front("itch");
	l2.push_front("blah blah");

	list <string> solution = difference(l1, l2);
	cout << "SOLUTION";
	for (string s : solution) {
		cout << s << endl;
	}

	Node n;
	n.setValue("TEST");
	cout << n.getValue();

	LinkedList list1, list2;
	list1.addToBeginning("A");
	list1.addToBeginning("B");
	list1.printList();
	list2.addToBeginning("A");
	list2.addToBeginning("C");
	cout << endl;
	list2.printList();

	cout << endl;


	SetLinkedList setLinkedList;
	LinkedList winner;
//	winner = setLinkedList.difference(list1, list2);
	winner = list1 + list2;
	cout << "Union:";
	winner.printList();

	winner = list1 * list2;
	cout << "Intersect:";
	winner.printList();

	winner = list1 - list2;
	cout << "Difference:";
	winner.printList();
	return 0;
}
