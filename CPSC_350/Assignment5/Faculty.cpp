#include "Faculty.h"
#include <iostream>
using namespace std;

Faculty::Faculty() {

}

Faculty::Faculty(string theirName, int IDnum, string theirLevel, string theirDepartment) : Person(theirName, IDnum, theirLevel) {
  department = theirDepartment;
  //advisees = new DoubleList<int>;
}

Faculty::~Faculty() {
  //delete advisees;
}

void Faculty::print() {
  Person::print();
  cout << "Department: " + department << endl;
}
/*
void Faculty::addAdvisee(int ID) {
  advisees->insertBack(ID);
}*/

string Faculty::toString() {
  theString += Person::toString() + "\n" + department + "\n";
  /*for (int i = 0; i < advisees->getSize()-1;  ++i) {
    theString += to_string(advisees->search(i)) + "\n";
  }*/
  return theString;
}
