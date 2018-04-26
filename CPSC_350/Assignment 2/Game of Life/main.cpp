//main.cpp
#include <iostream>
using namespace std;
#include <string>
#include <array>
#include "board.h"
#include "Neighbor.h"
#include <time.h>
#include <cstdlib>


int main(int argc, char** argv)
{

	int cycle = 0;
	string start;
	string file;
	string gamemode;
	int boundsRow;
	int boundsColumn;
	float decimal;
	srand (time(NULL));


  	cout<< "This is the game of life" << endl;
  	cout<< "To begin the simulation please specify if you want a random assignment or a pre-made map file by entering 'file' or 'random' : " << endl; 

  	cin >> start;

  	//thefirstarray
	board b(boundsRow,boundsColumn);
	//the second array
	board c(boundsRow, boundsColumn);
	//this is the neighbor object
	Neighbor n(boundsRow,boundsColumn);


  	if(start == "file")
		{
			cout << "Enter a file name:" << endl;
			cin >> file;
			fileReader(file);
		}
		else if(start == "random")
		{
			cout<< "Enter the number of rows" << endl;
			cin >> boundsRow;
			cout<< "Enter the number of column" << endl;
			cin >> boundsRow;
			cout << "Now enter a decimal number between 0.0 to 1.0" << endl;
			cin >>  decimal;

			 createRand(boundsRow, boundsColumn ,decimal, b.firstArray);
		}
		else
		{
			cout << "What you entered was not ok, please try again" << endl;
		}

		cout << "Please enter the gamemode: classic , donut or mirror " << endl;
		cin >> gamemode;

	void createRand(int boundsRow, int boundsColumns, int density, char **arrayone)
	{

		//create randome number between 0 and 1 ???
		float randNum = rand();
		int X;
		int Y;
			
		multiply = density * (boundsRow * boundsColumns);
		while(multiply > 0)
		{
			X = (randNum/RAND_MAX) * boundsRows ;
			Y = (randNum/RAND_MAX) * boundsColumns;
			if(arrayone[X][Y] != 'X')
			{
				arrayone[X][Y] = 'X';
				--multiply;
			}
		}
	}
	
	void fileReader(string file, char **arrayone)
	{
		int row;
		int column;

		ifstream myfile;
		myfile.open(file);
		string line;
		int lineNumber;
		int lineNum;

		if(!infile)	// this is to check if the file can be read or not
		{
			cerr << "Unable to open file";
			exit(1); //call system to stop
		}

		while(getline(file, line))
		{
			++lineNumber;
			for(int i =0; i < line.length(); ++i)
			{
				if(lineNumber == 1)
				{
					row = int(line.at(i)) - int('0');
				}
				else if(lineNumber == 2)
				{
					column = int(line.at(i)) - int('0');
					break;
				}
			}
		}

		while(getline(myfile, line))
		{
			++lineNum;
			if(lineNum > 2)
			{
				for(int i = 0; i < line.length(); i++)
				{
					arrayone[lineNum -3][i] = line.at(i);
				}
				cout << '\n';
			}
		}
		file.close(); 
	}	

	b.displayboard(boundsRow,boundsColumn);

	while(cycle < 100)
	{
	
		for(int i = 0; i < boundsRow; ++i)
		{
			for(int j = 0; j < boundsColumn; ++j)
			{

				int neighborCounter = n.checkNeighbor(i, j, b.firstArray, gamemode, boundsRow , boundsColumn);
			
				c.createOrg(neighborCounter, i , j);
				
				c.destroyOrg(neighborCounter, i, j);
			
				c.displayboard(boundsRow,boundsColumn);
			
			
			}
			
		}

		cycle +=1;

		//b.firstArray.swap(c.firstArray);

	}

	return 0;
}