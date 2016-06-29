//============================================================================
// Name        : SDL.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include "Screen.h"
using namespace std;
using namespace caveofprogramming;

int main() {

	Screen screen;

	if(screen.init() == false) {
		cout << "Error initialising SDL." << endl;
	}

	while (true) {
		// Update particles
		// Draw particles
		// Check for messages/events

		if(screen.processEvents() == false) {
			break;
		}
	}

	screen.close();

	return 0;
}
