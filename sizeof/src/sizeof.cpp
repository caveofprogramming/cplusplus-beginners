//============================================================================
// Name        : sizeof.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int values[] = {4, 7, 3, 4};

	cout << sizeof(values) << endl;
	cout << sizeof(int) << endl;

	for(unsigned int i=0; i < sizeof(values)/sizeof(int); i++) {
		cout << values[i] << " " << flush;
	}

	cout << endl;

	return 0;
}
