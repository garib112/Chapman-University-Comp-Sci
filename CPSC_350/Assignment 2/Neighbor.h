#ifndef NEIGHBOR_H
#define NEIGHBOR_H

#include <iostream>
using namespace std; 
#include <string>
#include "board.h"

//this header is to create everything for the neighbor file

class Neighbor
{

public:

//these variables are used in the checkNeighbor function
int boundsRow;
int boundsColumn;
int neighborCounter;
string gamemode;

Neighbor(int rows, int columns);

//this is the checkNeighbor function that checks how many nieghbors there are
int checkNeighbor(int i, int j, char **arrayone, string gamemode, int boundsRow, int boundsColumn);

//these four functions determine if a coordinate is an edge 
bool pointInTop(int x, int y);
bool pointInBottom(int x, int y);
bool pointInLeft(int x, int y);
bool pointInRight(int x, int y);



};

#endif
