#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
public:
	Person();
	Person(string theirName, int IDnum, string theirLevel);
	~Person();

	string name;
	int ID;
	string level;

	string theString;

	void print();
	string toString();
};

#endif
