#include "Neighbor.h"

int neighborCounter = 0;
string gamemode = " ";


Neighbor::Neighbor(int rows, int columns)
{
	boundsRow = rows;
	boundsColumn = columns;
}

bool Neighbor::pointInTop(int x, int y)
{

	if(x == 0 && y != 0 &&  y < (boundsColumn -1))
	{
		
		
		return true;
	}
	else
	{
		return false;
	}
}

//this is to determine if the coordinate is on the bottom ledge
bool Neighbor::pointInBottom(int x, int y)
{
	if(x == (boundsRow -1) && y < (boundsColumn - 1)  && y != 0 && x != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//this is to determine if the coordinate is on the left ledge
bool Neighbor::pointInLeft(int x, int y)
{
	if(x < (boundsRow -1) && y == 0 && x != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Neighbor::pointInRight(int x, int y)
{
	if(x < (boundsRow -1) && y == (boundsColumn -1) && x != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Neighbor::checkNeighbor(int i, int j, char **arrayOne , string gamemode, int boundsRow, int  boundsColumn)
	{	
		

		//this is if the user picks classic gamemode
		if(gamemode == "classic")
		{
			//this is to check the left top corner which is coordinate (0,0)
			if(i == 0 && j == 0)
			{
				
				if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				return neighborCounter;
				
			}
			//this checks the right top corner which is 
			//(0,"the bounds that the user put in for rows")
			else if(i == 0 && j == (boundsRow - 1))
			{
				
				if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 1;
				}
				return neighborCounter;

			}
			
			//this checks the left bottom corner which is
			//("the bounds for rows",0)
			else if(i == (boundsColumn-1) && j == 0)
			{
				
				if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				return neighborCounter;
			}

			//this checks the right bottom corner 
			//("the bounds of rows","bounds of columms")
			else if(i == (boundsRow-1) && j == (boundsColumn-1))
			{
				if(arrayOne[i-1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j-1]== 'X')
				{
					neighborCounter += 1;
				}
				return neighborCounter;
			}

			//this checks the top edge of the grid away from the corners
			//from (0,1) to (0,"boundsRow -1")
			else if(pointInTop(i,j) == true)
			{
				if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				return neighborCounter;

			}

			//this checks the left edge of the grid away from the corners
			//from (1,0) to (0,"boundsColumns -1")
			if(pointInLeft(i,j) == true)
			{

				if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 1;
				}
				return neighborCounter;
			}

			//this checks the bottom edge of the grid away from the corners
			//from (boundsColumn,1) to (boundsRow,"boundsRow -1")
			else if(pointInBottom(i,j) == true)
			{

				if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j+1]== 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				return neighborCounter;
			}

			//this checks the right edge of the grid away from the corners
			//from (1,boundsRow) to (boundsColumn -1, boundsRow)
			else if(pointInRight(i,j) == true)
			{
				
				if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 1;
				}
				return neighborCounter;
				
			}
			else
			{

				if(arrayOne[i-1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+2] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				return neighborCounter;
			}


		}

		else if(gamemode == "donut")
		{
			//this is to check the left top corner which is coordinate (0,0)
			if(i == 0 && j == 0)
			{
				if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[boundsRow-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[boundsRow-1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][boundsColumn-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][boundsColumn-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[boundsRow-1][boundsColumn-1] == 'X')
				{
					neighborCounter += 1;
				}
			}
			//this checks the right top corner which is 
			//(0,"the bounds that the user put in for rows")
			else if(i == 0 && j == boundsRow-1)
			{
				if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[j][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[j][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[0][0] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][0] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[j][0] == 'X')
				{
					neighborCounter += 1;
				}
			}
			
			//this checks the left bottom corner which is
			//("the bounds for rows",0)
			else if(i == boundsColumn-1 && j == 0)
			{
				if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[0][0] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[0][1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[0][i] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][i] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][i] == 'X')
				{
					neighborCounter += 1;
				}
			}

			//this checks the right bottom corner 
			//("the bounds of rows","bounds of columms")
			else if(i == (boundsRow-1) && j == (boundsColumn-1))
			{
				if(arrayOne[i-1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[0][0] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[0][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[0][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][0] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][0] == 'X')
				{
					neighborCounter += 1;
				}
			}

			//this checks the top edge of the grid away from the corners
			//from (0,1) to (0,"boundsRow -1")
			else if(pointInTop(i,j))
			{
				if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[boundsRow -1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[boundsRow-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[boundsRow-1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
			}

			//this checks the left edge of the grid away from the corners
			//from (1,0) to (0,"boundsColumns -1")
			if(pointInLeft(i,j))
			{
				if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][boundsColumn-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][boundsColumn-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][boundsColumn-1] == 'X')
				{
					neighborCounter += 1;
				}
			}

			//this checks the bottom edge of the grid away from the corners
			//from (boundsColumn,1) to (boundsRow,"boundsRow -1")
			else if(pointInBottom(i,j))
			{
				if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[0][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[0][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[0][j+1] == 'X')
				{
					neighborCounter += 1;
				}
			}

			//this checks the right edge of the grid away from the corners
			//from (1,boundsRow) to (boundsColumn -1, boundsRow)
			else if(pointInRight(i,j))
			{
				if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][0] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][0] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][0] == 'X')
				{
					neighborCounter += 1;
				}
			}
			else
			{
				if(arrayOne[i-1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+2] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
			}
		}

		else if(gamemode == "mirror")
		{
			//this is to check the left top corner which is coordinate (0,0)
			if(i == 0 && j == 0)
			{
				if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i+1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j] == 'X')
				{
					neighborCounter += 3;
				}
			}
			//this checks the right top corner which is 
			//(0,"the bounds that the user put in for rows")
			else if(i == 0 && j == boundsRow-1)
			{
				if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i+1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i][j] == 'X')
				{
					neighborCounter += 3;
				}
			}
			
			//this checks the left bottom corner which is
			//("the bounds for rows",0)
			else if(i == (boundsColumn-1) && j == 0)
			{
				if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i-1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i][j] == 'X')
				{
					neighborCounter += 3;
				}
			}

			//this checks the right bottom corner 
			//("the bounds of rows","bounds of columms")
			else if(i == (boundsRow-1) && j == (boundsColumn-1))
			{
				if(arrayOne[i-1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i][j-1]== 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i][j] == 'X')
				{
					neighborCounter += 3;
				}
			}

			//this checks the top edge of the grid away from the corners
			//from (0,1) to (0,"boundsRow -1")
			else if(pointInTop(i,j))
			{
				if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i+1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i][j] == 'X')
				{
					neighborCounter += 1;
				}
			}

			//this checks the left edge of the grid away from the corners
			//from (1,0) to (0,"boundsColumns -1")
			if(pointInLeft(i,j))
			{
				if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i-1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i][j] == 'X')
				{
					neighborCounter += 1;
				}
			}

			//this checks the bottom edge of the grid away from the corners
			//from (boundsColumn,1) to (boundsRow,"boundsRow -1")
			else if(pointInBottom(i,j))
			{
				if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i-1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j+1]== 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+1] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i][j] == 'X')
				{
					neighborCounter += 1;
				}
			}

			//this checks the right edge of the grid away from the corners
			//from (1,boundsRow) to (boundsColumn -1, boundsRow)
			else if(pointInRight(i,j))
			{
				if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i-1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 2;
				}
				else if(arrayOne[i][j] == 'X')
				{
					neighborCounter += 1;
				}
			}
			else
			{
				if(arrayOne[i-1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i-1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i][j+2] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j-1] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j] == 'X')
				{
					neighborCounter += 1;
				}
				else if(arrayOne[i+1][j+1] == 'X')
				{
					neighborCounter += 1;
				}
			}
		}
		return neighborCounter;
	}
