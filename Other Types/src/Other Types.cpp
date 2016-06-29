//============================================================================
// Name        : Other.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bValue = true;
	cout << bValue << endl;

	char cValue = 'g';
	cout << cValue << endl;
	cout << "Size of char: " << sizeof(char) << endl;

	wchar_t wValue = 'i';
	cout << (char)wValue << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}
