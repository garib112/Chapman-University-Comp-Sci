#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include "Neighbor.h"
using namespace std;

class board
{
public: 

	char **firstArray;

	board(int x, int y);
	void createOrg(int neighborCounter, int i, int j);
	void destroyOrg(int neighborCounter, int i, int j);
	void displayboard(int boundsRow, int boundsColumn);
};
#endif