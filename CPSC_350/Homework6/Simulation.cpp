#include "Simulation.h"
#include <sstream>


Simulation::Simulation(string filename) {
	ifstream file(filename);
	int lineNum = 0;
	int n;
	int numOfItems;

	if(file)
	{
		/*
		string line;
		string all;
		while (getline(file,line))
		{
			stringstream toInt(line);
    		toInt >> n;
    		if (lineNum == 0)
    			numOfItems = n;
		}
		*/
	}
	else {
		cout << "File not found. Shame on you." << endl;
	}
file.close();
}

Simulation::~Simulation()
{
}
