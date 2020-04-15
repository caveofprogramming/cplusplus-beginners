//============================================================================
// Name        : Inheritance.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
public:
	void speak() { cout << "Grrrr" << endl; }
};

class Cat: public Animal {
public:
	void jump() { cout << "Cat jumping!" << endl; }
};

class Tiger: public Cat {
public:
	void attackAntelope() { cout << "Attacking!" << endl; }
};

int main() {

	Animal a;
	a.speak();

	Cat cat;
	cat.speak();
	cat.jump();

	Tiger tiger;
	tiger.jump();
	tiger.speak();
	tiger.attackAntelope();

	return 0;
}
