/*
 * Person.cpp
 *
 *  Created on: 12 Jul 2014
 *      Author: johnwpurcell
 */

#include "Person.h"
#include <sstream>



string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}



