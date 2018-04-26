#include "Faculty.h"
#include <iostream>
#include <string>
using namespace std;

Faculty::Faculty()
{

}

Faculty::Faculty(string theirName, int IDnum, string theirLevel , string theirDepartment) {
	name = theirName;
	ID = IDnum;
	level = theirLevel;
	Department = theirDepartment;

	//not sure if the syntax is right here
	//list<int> listAdvisees = theirAdvisees;


}

Faculty::~Faculty() {

}

void Faculty::print() {
	string toString = "Name: " + name + "\nID: " + to_string(ID) + "\nLevel: " + level + "\nDepartment: " + Department;
	cout << toString << endl;
}
