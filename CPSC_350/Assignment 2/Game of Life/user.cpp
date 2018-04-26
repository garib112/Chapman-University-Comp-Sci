#include <iostream>
#include "user.h"

#include <iostream> //input/output stream
#include <fstream>	//file stream
#include <string>	//allows the use of strings
#include <locale>	//this allows for .toupper()/.tolower()

using namespace std;

/* initialize random seed: */
  	srand (time(NULL));

  	float decimal;
		

	void user::fileReader(string file, char **arrayone)
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

		return 
	}

	void user::createRand(int boundsRow, int boundsColumns, int density, char **arrayone)
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