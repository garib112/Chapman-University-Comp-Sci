#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student() {

}

Student::Student(string theirName, int IDnum, string theirLevel , string theirMajor, double theirGPA, int theirAdvisor) {
	name = theirName;
	ID = IDnum;
	level = theirLevel;
	Major = theirMajor;
	GPA = theirGPA;
	Advisor = theirAdvisor;

}

Student::~Student()
{

}

void Student::print() {
	string toString = "Name: " + name + "\nID: " + to_string(ID) + "\nLevel: " + level + "\nMajor: " + Major + "\nGPA: " + to_string(GPA) + "\nAdvisor: " + to_string(Advisor);
	cout << toString << endl;
}
int Student::returnIDofAdvisor()
{
	return Advisor;
}
