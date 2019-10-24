//============================================================================
// Name        : Allocating.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//This is a class struture in c++
class Animal {
//this is a encapsulation, it define the access level variable
private:
	string name;

public:
	Animal() {
		cout << "Animal created." << endl;
	}

	Animal(const Animal& other) :
			name(other.name) {
		cout << "Animal created by copying." << endl;
	}

	~Animal() {
		cout << "Destructor called" << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void speak() const {
		cout << "My name is: " << name << endl;
	}
};


int main() {
	
	//this is a allocation of memory
	Animal *pAnimal = new Animal[10];
	//when you use "new", you offer memory to system from your object
	//as are 10 itens, this become a array of "Animal" with 10 elements
	
	pAnimal[5].setName("George");
	pAnimal[5].speak();

	delete [] pAnimal;

	//this is a array of 1000 elements
	char *pMem = new char[1000];
	
	//this clear the array, releasing memory
	delete [] pMem;

	char c = 'a';
	c++;
	string name(5, c);
	cout << name << endl;
	
	// A pointer can become a array if you allocat memory for that
	int * pointer;
	pointer = new int[3];
	delete [] pointer;


	return 0;
}
