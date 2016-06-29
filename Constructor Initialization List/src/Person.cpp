/*
 * Person.cpp
 *
 *  Created on: 12 Jul 2014
 *      Author: johnwpurcell
 */

#include "Person.h"
#include <sstream>

Person::Person() {
	age = 0;
	name = "";

}

Person::Person(string name, int age) {
	this->name = name;
	this->age = age;

	cout << "Memory location of object: " << this << endl;
}


string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}



