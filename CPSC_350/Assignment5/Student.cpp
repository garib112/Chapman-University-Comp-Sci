#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {

}

Student::Student(string theirName, int IDnum, string theirLevel, string theirMajor, int advisorID) : Person(theirName, IDnum, theirLevel) {
  major = theirMajor;
  advisor = advisorID;
}

Student::~Student() {

}

void Student::print() {
  Person::print();
  cout << "Major: " + major << endl;
  cout << "Advisor: " + to_string(advisor) << endl;
}

string Student::toString() {
  theString += Person::toString() + "\n" + major + "\n" + to_string(advisor) + "\n";
  return theString;
}

void Student::changeAdvisor(int newID) {
  advisor = newID;
}
