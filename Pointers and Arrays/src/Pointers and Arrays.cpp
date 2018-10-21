//============================================================================
// Name        : Pointers.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Loop through an array using a pointer, with array element reference syntax
// Loop through an array by incrementing a pointer
// Loop through an array, stopping by comparing two pointers

int main() {

	string texts[] = { "one", "two", "three" };

	string *pTexts = texts; // pointer to string array "texts"

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << pTexts[i] << " " << flush;       // printing the string array without pointer
	}

	cout << endl;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++) {
		cout << *pTexts << " " << flush;     // printing the string array by incrementing the pointer
	}

	cout << endl;

	string *pElement = &texts[0];
	string *pEnd = &texts[2];

	while(true) {
		cout << *pElement << " " << flush;    // printing the string array by incrementing the pointer stopping by comparing two pointers

		if(pElement == pEnd) {
			break;
		}

		pElement++;
	}


	return 0;
}
