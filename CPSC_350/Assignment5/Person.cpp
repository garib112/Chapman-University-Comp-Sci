#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person() {

}

Person::Person(string theirName, int IDnum, string theirLevel) {
	name = theirName;
	ID = IDnum;
	level = theirLevel;
}

Person::~Person() {

}

void Person::print() {
	cout << "Name: " + name << endl;
	cout << "ID: " + to_string(ID) << endl;
	cout << "Level: " + level << endl;
}

string Person::toString() {
	theString += name + "\n" + to_string(ID) + "\n" + level;
	return theString;
}
