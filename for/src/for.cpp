//============================================================================
// Name        : for.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : for looping statement
//============================================================================

#include <iostream>
using namespace std;
// for is a looping statement. Loop statements are used to execute a set of instructions repeated number of times till the time a condition is met .
int main() {

	for (int i = 0; i < 10; i++) // The syntax of for loop is -   for( initialising_statement ; condition ; update expression for looping variable (i in this case))
	{

		cout << "Hello " << i << endl;        // This is the body of the loop ^^
	}

	return 0;
}
