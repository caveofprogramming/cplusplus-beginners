//============================================================================
// Name        : Inheritance.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Machine {
private:
	int id;

public:
	Machine(): id(0) { cout << "Machine no-argument constructor called." << endl; }
	Machine(int id): id(id) { cout << "Machine parameterized constructor called." << endl; }
	void info() { cout << "ID: " << id << endl; }
};

class Vehicle: public Machine {
public:
	Vehicle(int id): Machine(id) { cout << "Vehicle parameterized constructor called." << endl; }
	Vehicle() { cout << "Vehicle no-argument constructor called." << endl; }
};

class Car: public Vehicle {
public:
	Car(): Vehicle(999) { cout << "Car no-argument constructor called." << endl; }
};

int main() {
	Car car;
	car.info();

	return 0;
}
