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

void printMenu() {
	cout << "Please select from the following options." << endl;
	cout << "1. Sets using a list." << endl;
	cout << "2. Sets using an ADT (Linked List). " << endl;
	cout << "3. Exit Program." << endl;
	cout << "Enter Choice: ";
}

void populateList (list <string> &l1, list <string> &l2) {
	string str;
	while (str != "-1") {
		cout << "Please enter a string for List1 (Enter -1 to exit):";
		cin >> str;
		if (str != "-1") {
			l1.push_back(str);
		}
	}
	str = "1";
	while (str != "-1") {
		cout << "Please enter a string for List2 (Enter -1 to exit): ";
		cin >> str;
		if (str != "-1") {
			l2.push_back(str);
		}
	}
}

void populateLinkedList (LinkedList &l1, LinkedList &l2) {
	string str;
	while (str != "-1") {
		cout << "Please enter a string for List1 (Enter -1 to exit):";
		cin >> str;
		if (str != "-1") {
			l1.addToBeginning(str);
		}
	}
	str = "1";
	while (str != "-1") {
		cout << "Please enter a string for List2 (Enter -1 to exit): ";
		cin >> str;
		if (str != "-1") {
			l2.addToBeginning(str);
		}
	}
}

void printSetOps() {
	string choice;
	cout << "Please select an option." << endl;
	cout << "1. List 1 Union List 2" << endl;
	cout << "2. List 1 Intersect List 2" << endl;
	cout << "3. List 1 Difference List 2" << endl;
}

void printList (list <string> list) {
	for (string str : list) {
		cout << str << "  ";
	}
	cout << endl;
}

int main() {
	int option, setOpsChoice;
	list <string> list1, list2, solutionList;
	LinkedList linkedList1, linkedList2, solutionLinkedList;
	while (option != 3) {
		list <string> list1, list2, solutionList;
		LinkedList linkedList1, linkedList2, solutionLinkedList;
		printMenu();
		cin >> option;
		if (option == 1) {
			populateList (list1, list2);
			printSetOps();
			cin >> setOpsChoice;
			if (setOpsChoice == 1) {
				solutionList = unionSet(list1, list2);
			}
			else if (setOpsChoice == 2) {
				solutionList = intersection (list1, list2);
			}
			else if (setOpsChoice == 3) {
				solutionList = difference (list1, list2);
			}
			else {
				cout << "Invalid Entry";
			}
			cout << "List 1: ";
			printList(list1);
			cout << "List 2: ";
			printList(list2);
			cout << "Solution Set: ";
			printList(solutionList);

		}
		else if (option == 2) {
			populateLinkedList (linkedList1, linkedList2);
			printSetOps();
			cin >> setOpsChoice;
			if (setOpsChoice == 1) {
				solutionLinkedList = linkedList1 + linkedList2;
			}
			else if (setOpsChoice == 2) {
				solutionLinkedList = linkedList1 * linkedList2;
			}
			else if (setOpsChoice == 3) {
				solutionLinkedList = linkedList1 - linkedList2;
			}
			else {
				cout << "Invalid Entry";
			}
			cout << "Linked List 1: ";
			linkedList1.printList();
			cout << endl;
			cout << "List 2: ";
			linkedList2.printList();
			cout << endl;
			cout << "Solution Set: ";
			solutionLinkedList.printList();
			cout << endl;
		}
		else {
			cout << "Exiting Program";
		}
	}



	return 0;
}
