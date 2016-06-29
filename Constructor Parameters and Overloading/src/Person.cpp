/*
 * Person.cpp
 *
 *  Created on: 12 Jul 2014
 *      Author: johnwpurcell
 */

#include <sstream>
#include "Person.h"


Person::Person() {
	name = "undefined";
	age = 0;
}

Person::Person(string newName, int newAge) {
	name = newName;
	age = newAge;
}

string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}

