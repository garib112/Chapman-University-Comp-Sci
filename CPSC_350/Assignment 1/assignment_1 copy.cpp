/* 
Alberto Garibay
ID 2271460
garib112@mail.chapman.edu
CPSC 350-02
Assignment 01 
*/


#include "assignment_1.h"

assignment_1::assignment_1()
{

}

assignment_1::~assignment_1()
{
	cout << "the object has been deleted" << endl; 
}

void assignment_1::fileReader(string file)
{
		ifstream myfile;
		myfile.open(dnaFile);

		string bigramString;

		A_counter = 0;
		AA_counter = 0;
		AC_counter = 0;
		AG_counter = 0;
		AT_counter = 0;

		C_counter= 0;
		CA_counter = 0;
		CC_counter = 0;
		CG_counter = 0;
		CT_counter = 0;

		G_counter = 0;
		GA_counter = 0;
		GC_counter = 0;
		GG_counter = 0;
		GT_counter = 0;

		T_counter = 0;
		TA_counter = 0;
		TC_counter = 0;
		TG_counter = 0;
		TT_counter = 0;

		sum = 0;
		Bigram_sum = sum - 1;
		line_counter = 0;
		variance = 0;

		for (string line; getline (myfile, line);)
		{
			ofstream outputFile("AlbertoGaribay.txt");

			line_counter++;

			sum += line.length(); // this adds to the final sum

			mean = sum/line_counter; // this will give the mean of the length of the lines

			for (int i = 0; i < line.length(); i++)
			{
				line[i] = toupper(line[i]);

				// this is to check for which nucleotid it is
				if (line[i] == 'A')
				{
					A_counter++;
				}
				else if (line[i] == 'C')
				{
					C_counter++;
				}
				else if (line[i] == 'G')
				{
					G_counter++;
				}
				else if (line[i] == 'T')
				{
					T_counter++;
				}
				else
				{
				}

				//this will check all the bigram combinations
				if(i == 0)
				{
					bigramString = line[i];
				}
				else if (i == 1)
				{
					bigramString += line[i];
				}
				else
				{
					bigramString.erase(bigram.begin());
					bigramString += line[i];
				}

				if (bigramString == "AA")
				{
					AA_counter++;
				}
				else if (bigramString == "AC")
				{
					AC_counter++;
				}
				else if (bigramString == "AG")
				{
					AG_counter++;
				}
				else if (bigramString == "AT")
				{
					AT_counter++;
				}


				else if (bigramString == "CA")
				{
					CA_counter++;
				}
				else if (bigramString == "CC")
				{
					CC_counter++;
				}
				else if (bigramString == "CG")
				{
					CG_counter++;
				}
				else if (bigramString == "CT")
				{
					CT_counter++;
				}


				else if (bigramString == "GA")
				{
					GA_counter++;
				}
				else if (bigramString == "GC")
				{
					GC_counter++;
				}
				else if (bigramString == "GG")
				{
					GG_counter++;
				}
				else if (bigramString == "GT")
				{
					GT_counter++;
				}


				else if (bigramString == "TA")
				{
					TA_counter++;
				}
				else if (bigramString == "TC")
				{
					TC_counter++;
				}
				else if (bigramString == "TG")
				{
					TG_counter++;
				}
				else if (bigramString == "TT")
				{
					TT_counter++;
				}


				else
				{
				}
			}
		}

		myfile.close();
		myfile.open(file);

		for(string line; getline(myfile, line);)
		{
			variance += (pow(line.length() - mean, 2)) / line_counter;
		}

		myfile.close();
}

void assignment_1::standardDeviation()
{
	standardDeviation = (pow(variance, .5));
}

int assignment_1::getSum()
{
	return sum;
}

double assignment_1::getMean()
{
	return mean;
}

double assignment_1::getVariance()
{
	return variance;
}

double assignment_1::getStanDev()
{
	return standardDeviation;
}

void assignment_1::nucle_Probability()
{
	ofstream outputFile("AlbertoGaribay.txt");

	A_probab = (A_counter * 1.0) / sum;
	C_probab = (C_counter * 1.0) / sum;
	G_probab = (G_counter * 1.0) / sum;
	T_probab = (T_counter * 1.0) / sum;

	outputFile << "Probability of the A nucleotid = " << A_probab << endl;
	outputFile << "Probability of the C nucleotid = " << C_probab << endl;
	outputFile << "Probability of the G nucleotid = " << G_probab << endl;
	outputFile << "Probability of the T nucleotid = " << T_probab << endl;

}

void assignment_1::bigramProbability()
{
	ofstream outputFile("AlbertoGaribay.txt")

	AA_probab = (AA_counter * 1.0) / Bigram_sum;
	AC_probab = (AC_counter * 1.0) / Bigram_sum;
	AG_probab = (AG_counter * 1.0) / Bigram_sum;
	AT_probab = (AT_counter * 1.0) / Bigram_sum;


	CA_probab = (CA_counter * 1.0) / Bigram_sum;
	CC_probab = (CC_counter * 1.0) / Bigram_sum;
	CG_probab = (CG_counter * 1.0) / Bigram_sum;
	CT_probab = (CT_counter * 1.0) / Bigram_sum;


	GA_probab = (GA_counter * 1.0) / Bigram_sum;
	GC_probab = (GC_counter * 1.0) / Bigram_sum;
	GG_probab = (GG_counter * 1.0) / Bigram_sum;
	GT_probab = (GT_counter * 1.0) / Bigram_sum;


	TA_probab = (TA_counter * 1.0) / Bigram_sum;
	TC_probab = (TC_counter * 1.0) / Bigram_sum;
	TG_probab = (TG_counter * 1.0) / Bigram_sum;
	TT_probab = (TT_counter * 1.0) / Bigram_sum;

	outputFile << "Probability of AA = " << AA_counter << endl;
	outputFile << "Probability of AC = " << AA_counter << endl;
	outputFile << "Probability of AG = " << AA_counter << endl;
	outputFile << "Probability of AT = " << AA_counter << endl;

	outputFile << "Probability of CA = " << AA_counter << endl;
	outputFile << "Probability of CC = " << AA_counter << endl;
	outputFile << "Probability of CG = " << AA_counter << endl;
	outputFile << "Probability of CT = " << AA_counter << endl;

	outputFile << "Probability of GA = " << AA_counter << endl;
	outputFile << "Probability of GC = " << AA_counter << endl;
	outputFile << "Probability of GG = " << AA_counter << endl;
	outputFile << "Probability of GT = " << AA_counter << endl;

	outputFile << "Probability of TA = " << AA_counter << endl;
	outputFile << "Probability of TC = " << AA_counter << endl;
	outputFile << "Probability of TG = " << AA_counter << endl;
	outputFile << "Probability of TT = " << AA_counter << endl;

}

void assignment_1::createDna()
{
	ofstream outputFile("AlbertoGaribay.txt");

	int countChar = 0;
	int countLines = 0;

	string letter = "A" , "C" , "T" , "G";

	while(countLines <= 1000)
	{
		double w = rand() * 1.0 / RAND_MAX;
		double x = rand() * 1.0 / RAND_MAX;
		double y = sqrt((-2) * log(w)) * cos (2 * M_PI * b);

		int z = standardDeviation * c + mean;

		while (countChar <= z)
		{
			int v = rand() % 4;

			outputFile << letter[v];
			countChar++;

		}

		countChar = 0;
		countLines++;
		outputFile << endl;

	}
}







