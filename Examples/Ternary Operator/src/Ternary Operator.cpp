//============================================================================
// Name        : Ternary.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;


int main() {

	double max = 0;

	for(int i=0; i<10000; i++) {
		double value = sin(i);

		/*
		if(value > max) {
			max = value;
		}
		*/
		max = value > max ? value : max;
	}

	cout << "Max: " << max << endl;

	return 0;
}
