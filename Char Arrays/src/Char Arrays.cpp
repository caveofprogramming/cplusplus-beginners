//============================================================================
// Name        : Char.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char texts[] = "hello";

	cout << texts << endl;

	for(int i=0; i<sizeof(texts); i++) {
		cout << i << ": " << (int)texts[i] << endl;
	}

	return 0;
}
