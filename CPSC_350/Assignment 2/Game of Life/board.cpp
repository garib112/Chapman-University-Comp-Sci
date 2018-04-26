#include <iostream>
#include <array>
#include "board.h"

using namespace std; 

	board::board(int x, int y)
	{
		firstArray = new char *[x];
		for(int i = 0; i < x ; ++i)
		{
			firstArray[i] = new char [y];
		}
	}
	

	void board::createOrg(int neighborCounter, int i, int j)
		{

			if (neighborCounter >= 3)
				{
					if(firstArray[i][j] == '\0')
					{
						firstArray[i][j] = 'X';
					}
				}
		}

	void board::destroyOrg(int neighborCounter, int i, int j)
		{
			if (neighborCounter <= 1 || neighborCounter >= 4)
			{
				firstArray[i][j] = '\0';
			}
		}
		
	void board::displayboard(int boundsRow, int boundsColumn)
		{

			for(int i = 0; i < boundsRow; ++i)
			{
				for(int j = 0; j < boundsColumn; ++j)
				{
					if(firstArray[i][j] == '\0')
					{
						firstArray[i][j] = '-';
						cout << firstArray[i][j] << " ";
					}
					else
					{
					cout << firstArray[i][j] << " ";
					}
				}
				cout << endl;
			}
		}




