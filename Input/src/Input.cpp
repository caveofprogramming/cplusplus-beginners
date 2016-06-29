//============================================================================
// Name        : Input.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Enter your name: " << flush;
	string input;
	cin >> input;
	cout << "You entered: " << input << endl;

	cout << "Enter a number: " << flush;
	int value;
	cin >> value;
	cout << "You entered: " << value << endl;

	return 0;
}
