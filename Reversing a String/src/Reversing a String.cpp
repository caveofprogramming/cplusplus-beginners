//============================================================================
// Name        : Reversing.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	
	//Entering the string 
	char text[] = "Hello there!";
	
	//calculating the size of text
	int nChars = sizeof(text)-1;
	
	//Assiging the address of text array to a pointer 
	char *pStart = text;

	//setting the last alphabet adrress to a pointer
 	char *pEnd = text + nChars - 1;

	//Swapping the string into reverse string
	while(pStart < pEnd) {

		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;

		pStart++;
		pEnd--;
	}

	//printing reverse string
	cout <<"\n"<<text<< endl;


	return 0;
}
