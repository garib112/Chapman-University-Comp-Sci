//Alberto Garibay
//2271460
//garib112@mail.chapman.edu
//CPSC350 Sec-2
//Assignment 3

/* This is the main file where it runs the functions
from the other files*/

#include "delimiterCheck.h"
//#include "genstack.h"

int main(int arc, char *argv[])
{
  delimiterCheck c;

  c.setDelimiter(argv[1]);
  c.stackCheck();
}
