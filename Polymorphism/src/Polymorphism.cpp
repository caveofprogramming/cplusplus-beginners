//============================================================================
// Name        : Polymorphism.cpp
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

	virtual void speak() {
		cout << "Grrrr" << endl;
	}

	virtual ~Animal() {
		cout << "Animal destroyed" << endl;
	}
};

class Cat: public Animal {
public:
	virtual void speak() {
		cout << "Meeeouw" << endl;
	}

	virtual ~Cat() {
		cout << "Cat destroyed" << endl;
	}
};

class Tiger: public Cat {
public:
	virtual void speak() {
		cout << "Roarr" << endl;
	}

	virtual ~Tiger() {
		cout << "Tiger destroyed" << endl;
	}
};

int main() {

	Cat *pCat = new Cat();
	pCat->speak();
	delete pCat;

	Animal *pAnimal = new Tiger();
	pAnimal->speak();
	delete pAnimal;

	return 0;
}
