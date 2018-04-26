#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
public:
  Student();
  Student(string theirName, int IDnum, string level, string theirMajor, int advisorID);
  ~Student();

  string major;
  int advisor;

  string theString;

  void print();
  string toString();
  void changeAdvisor(int newID);
};

#endif
