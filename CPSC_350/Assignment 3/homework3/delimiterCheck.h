//Alberto Garibay
//2271460
//garib112@mail.chapman.edu
//CPSC350 Sec-2
//Assignment 3

/*This file is the header for the delimiterChecker
its purpose is to implement the following methods and variables*/

#include <iostream>
using namespace std;


class delimiterCheck
{
public:
  delimiterCheck();
  ~delimiterCheck();

  int lineCounter;

  void setDelimiter(string fileName);

  void stackCheck();

};
