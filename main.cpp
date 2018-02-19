#include <iostream>
#include <list>
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
	cout << "Hello World!!!" << endl; // prints !!!Hello World!!!
	l1.push_front("test");
	l1.push_front("hello again");

	list <string> l2;

	l2.push_front("test");
	l1.push_front("itch");
	l2.push_front("blah blah");

	list <string> solution = difference(l1, l2);
	for (string s : solution) {
		cout << s << endl;
	}
	return 0;
}
