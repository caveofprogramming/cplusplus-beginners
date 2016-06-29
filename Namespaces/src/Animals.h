/*
 * Animals.h
 *
 *  Created on: 22 Jul 2014
 *      Author: johnwpurcell
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

namespace jwp {

const string CATNAME = "Tiddles";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace jwp */

#endif /* ANIMALS_H_ */
