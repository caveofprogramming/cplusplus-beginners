//============================================================================
// Name        : Overriding.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
public:
	void run() {
		cout << "Animal running" << endl;
	}

	void speak() {
		cout << "Grrrr" << endl;
	}
};

class Cat: public Animal {
public:
	void speak() {
		cout << "Meeeouw" << endl;
	}
};


int main() {
	Animal animal;
	animal.run();
	animal.speak();

	Cat cat;
	cat.run();
	cat.speak();

	return 0;
}
