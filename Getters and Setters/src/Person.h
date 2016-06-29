/*
 * Person.h
 *
 *  Created on: 11 Jul 2014
 *      Author: johnwpurcell
 */

#ifndef PERSON_H_
#define PERSON_H_


#include <iostream>

using namespace std;

class Person {
private:
	string name;

public:
	Person();
	string toString();
	void setName(string newName);
	string getName();
};

#endif /* PERSON_H_ */
