//============================================================================
// Name        : Arithmetic.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
 * +
 * -
 * *
 * /
 * +=
 * -=
 * /=
 * *=
 * %
 * %=
 * precedence
 */

// Take large numbers of seconds and convert it to hours, minutes, seconds
// Write a for loop that iterates 10,000 times; output a dot (on the same line) every 100 iteration (use mod %)


int main() {

	double value1 = (double)7/2;
	cout << value1 << endl;

	int value2 = (int)7.3;
	cout << value2 << endl;

	int value3 = 8;
	value3 += 1; // value3 = value3 + 1 or value3++;
	cout << value3 << endl;

	int value4 = 10;
	value4 /= 5; // value4 = value4/5
	cout << value4 << endl;

	int value5 = 13%5;
	cout << value5 << endl;

	double equation = ((5/4)%2)+(2.3*6); // Don't do this: 5/4%2+2.3*6;
	cout << equation << endl;


	return 0;
}
