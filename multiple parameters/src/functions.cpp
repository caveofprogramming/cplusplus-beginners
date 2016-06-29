//============================================================================
// Name        : functions.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

int getInput() {
	cout << "Enter selection: " << endl;

	int input;
	cin >> input;

	return input;
}

void processSelection(int option, bool editAllowed) {

	switch (option) {
	case 1:
		if (editAllowed) {
			cout << "Editing ..." << endl;
		} else {
			cout << "Insufficient privileges for editing" << endl;
		}
		break;
	case 2:
		cout << "Viewing ..." << endl;
		break;
	case 3:
		cout << "Quitting ..." << endl;
		break;
	default:
		cout << "Please select an item from the menu." << endl;
	}
}

void doSomething(int something) {
	cout << "1. " << something << endl;
	something = 7;
	cout <<  "2. " << something << endl;
}

int main() {

	int value = 8;
	doSomething(value);
	cout <<  "3. " << value << endl;

	bool editAllowed = false;

	showMenu();
	int selection = getInput();
	processSelection(selection, editAllowed);

	return 0;
}
