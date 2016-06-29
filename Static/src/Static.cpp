//============================================================================
// Name        : Static.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// .h header file
class Test {
public:
	// Initialisation of const must be done right here!
	static int const MAX = 99;

private:
	int id;
	static int count;

public:
	Test() {
		id = count++;
	}

	int getId() {
		return id;
	}

	static void showInfo() {
		cout << count << endl;
	}
};

// .cpp source
int Test::count = 0;

int main() {

	cout << Test::MAX << endl;

	Test test1;
	cout << "Object 1 ID: " << test1.getId() << endl;

	Test test2;
	cout << "Object 2 ID: " << test2.getId() << endl;;

	Test::showInfo();

	return 0;
}
