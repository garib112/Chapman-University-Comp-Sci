/* 
Alberto Garibay
ID 2271460
garib112@mail.chapman.edu
CPSC 350-02
Assignment 01 
*/

#include "assignment_1.h"
#include "assignment_1.cpp"

int main(int argc, char** argv)
{
	assignment_1 myfile;
	string dnaFile;
	dnaFile = argv[1];

	int runProg;

	while(true)
	{
		myfile.readDnaFile(dnaFile);

		myfile.standardDeviation();

		ofstream outputFile("AlbertoGaribay.txt", ios_base::app);

		outputFile << "Alberto Garibay" << endl;
		outputFile << "ID 2271460" << endl;
		outputFile << "garib112@mail.chapman.edu" << endl;

		outputFile << "Statistics: " << endl << endl;

		outputFile << "Sum = " << myfile.getSum() << endl << endl;
		outputFile << "Mean = " << myfile.getMean() << endl << endl;
		outputFile << "Variance = " << myfile.getVariance() << endl << endl;
		outputFile << "standardDeviation = " << myfile.getStandDev() << endl << endl;

		myfile.nucle_Probability();
		myfile.bigramProbability();
		myfile.createDna();

		cout << "Run again??? Press 1 to run again and 2 to quit." << endl;

		cin >> runProg;

		if(runProg == 2)
		{
			break;
		}
		else
		{
			cout << "Enter file name";
			cin >> dnaFile;
		}

	}

	return 0;

}