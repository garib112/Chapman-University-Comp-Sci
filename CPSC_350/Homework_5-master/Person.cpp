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
	toString += "Name: " + name + "\nID: " + to_string(ID) + "\nLevel: " + level;
	cout << toString << endl;
}
