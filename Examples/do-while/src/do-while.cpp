//============================================================================
// Name        : do-while.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const string password = "hello";

	string input;

	do {
		cout << "Enter your password > " << flush;
		cin >> input;

		if(input != password) {
			cout << "Access denied." << endl;
		}

	} while (input != password);


	cout << "Password accepted" << endl;

	return 0;
}
