#ifndef FACULTY_H
#define FACULTY_H

#include "Person.h"
#include "DoubleList.h"

class Faculty : public Person {
public:
  Faculty();
  Faculty(string theirName, int IDnum, string theirLevel, string theirDepartment);
  ~Faculty();

  string department;
  //DoubleList<int>* advisees;

  //void addAdvisee(int ID);
  void print();

  string theString;
  string toString();
};

#endif
