#ifndef USER_H
#define USER_H

#include <iostream>
#include <stdlib.h>
using namespace std;



class user
{
public:
	/* initialize random seed: */
  	

	void fileReader(string file);

	void createRand(int boundsRow, int boundsColumns, int density, char **arrayone);
	

};
#endif