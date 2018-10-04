//============================================================================
// Name        : switch.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Explanation of Switch statement through a code
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char choice;
	cout<<"Enter your choice : \n";
	cin>>choice;

	switch (choice) {
	case 'A':
		cout << "You entered the choice A ^^" << endl;
		break;
	case 'B':
		cout << "You entered the choice B ^^" << endl;
		break;
	case 6:
		cout << "You entered the choice C ^^" << endl;
		break;
	default:
		cout << "No choice matched , Hence the default case will execute" << endl;
	}

	return 0;
}
