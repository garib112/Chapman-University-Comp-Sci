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

void assignment_1::readDnaFile(string file)
{
		ifstream myfile;
		myfile.open(dnaFile);

		string bigramString;

		a_counter = 0;
		aa_counter = 0;
		ac_counter = 0;
		ag_counter = 0;
		at_counter = 0;

		c_counter= 0;
		ca_counter = 0;
		cc_counter = 0;
		cg_counter = 0;
		ct_counter = 0;

		g_counter = 0;
		ga_counter = 0;
		gc_counter = 0;
		gg_counter = 0;
		gt_counter = 0;

		t_counter = 0;
		ta_counter = 0;
		tc_counter = 0;
		tg_counter = 0;
		tt_counter = 0;

		sum = 0;
		bigram_sum = sum - 1;
		line_counter = 0;
		variance = 0;

		for (string line; getline (myfile, line);)
		{
			ofstream outputFile("AlbertoGaribay.txt", ios_base::app);

			line_counter++;

			sum += line.length(); // this adds to the final sum

			mean = sum/line_counter; // this will give the mean of the length of the lines

			for (int i = 0; i < line.length(); i++)
			{
				line[i] = toupper(line[i]);

				// this is to check for which nucleotid it is
				if (line[i] == 'A')
				{
					a_counter++;
				}
				else if (line[i] == 'C')
				{
					c_counter++;
				}
				else if (line[i] == 'G')
				{
					g_counter++;
				}
				else if (line[i] == 'T')
				{
					t_counter++;
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
					aa_counter++;
				}
				else if (bigramString == "AC")
				{
					ac_counter++;
				}
				else if (bigramString == "AG")
				{
					ag_counter++;
				}
				else if (bigramString == "AT")
				{
					at_counter++;
				}


				else if (bigramString == "CA")
				{
					ca_counter++;
				}
				else if (bigramString == "CC")
				{
					cc_counter++;
				}
				else if (bigramString == "CG")
				{
					cg_counter++;
				}
				else if (bigramString == "CT")
				{
					ct_counter++;
				}


				else if (bigramString == "GA")
				{
					ga_counter++;
				}
				else if (bigramString == "GC")
				{
					gc_counter++;
				}
				else if (bigramString == "GG")
				{
					gg_counter++;
				}
				else if (bigramString == "GT")
				{
					gt_counter++;
				}


				else if (bigramString == "TA")
				{
					ta_counter++;
				}
				else if (bigramString == "TC")
				{
					tc_counter++;
				}
				else if (bigramString == "TG")
				{
					tg_counter++;
				}
				else if (bigramString == "TT")
				{
					tt_counter++;
				}

				else
				{
				}
			}
		}

		myfile.close();
		myfile.open(dnaFile);

		for(string line; getline(myfile, line);)
		{
			variance += (pow(line.length() - mean, 2)) / line_counter;
		}

		myfile.close();
}

void assignment_1::standardDeviation()
{
	standDev = (pow(variance, .5));
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
	return standDev;
}

void assignment_1::nucle_Probability()
{
	ofstream outputFile("AlbertoGaribay.txt", ios_base::app);

	a_probab = (a_counter * 1.0) / sum;
	c_probab = (c_counter * 1.0) / sum;
	g_probab = (g_counter * 1.0) / sum;
	t_probab = (t_counter * 1.0) / sum;

	outputFile << "Probability of the A nucleotid = " << a_probab << endl;
	outputFile << "Probability of the C nucleotid = " << c_probab << endl;
	outputFile << "Probability of the G nucleotid = " << g_probab << endl;
	outputFile << "Probability of the T nucleotid = " << t_probab << endl;

}

void assignment_1::bigramProbability()
{
	ofstream outputFile("AlbertoGaribay.txt", ios_base::app)

	aa_probab = (aa_counter * 1.0) / bigram_sum;
	ac_probab = (ac_counter * 1.0) / bigram_sum;
	ag_probab = (ag_counter * 1.0) / bigram_sum;
	at_probab = (at_counter * 1.0) / bigram_sum;


	ca_probab = (ca_counter * 1.0) / bigram_sum;
	cc_probab = (cc_counter * 1.0) / bigram_sum;
	cg_probab = (cg_counter * 1.0) / bigram_sum;
	ct_probab = (ct_counter * 1.0) / bigram_sum;


	ga_probab = (ga_counter * 1.0) / bigram_sum;
	gc_probab = (gc_counter * 1.0) / bigram_sum;
	gg_probab = (gg_counter * 1.0) / bigram_sum;
	gt_probab = (gt_counter * 1.0) / bigram_sum;


	ta_probab = (ta_counter * 1.0) / bigram_sum;
	tc_probab = (tc_counter * 1.0) / bigram_sum;
	tg_probab = (tg_counter * 1.0) / bigram_sum;
	tt_probab = (tt_counter * 1.0) / bigram_sum;

	outputFile << "Probability of AA = " << aa_counter << endl;
	outputFile << "Probability of AC = " << ac_counter << endl;
	outputFile << "Probability of AG = " << ag_counter << endl;
	outputFile << "Probability of AT = " << at_counter << endl;

	outputFile << "Probability of CA = " << ca_counter << endl;
	outputFile << "Probability of CC = " << cc_counter << endl;
	outputFile << "Probability of CG = " << cg_counter << endl;
	outputFile << "Probability of CT = " << ct_counter << endl;

	outputFile << "Probability of GA = " << ga_counter << endl;
	outputFile << "Probability of GC = " << gc_counter << endl;
	outputFile << "Probability of GG = " << gg_counter << endl;
	outputFile << "Probability of GT = " << gt_counter << endl;

	outputFile << "Probability of TA = " << ta_counter << endl;
	outputFile << "Probability of TC = " << tc_counter << endl;
	outputFile << "Probability of TG = " << tg_counter << endl;
	outputFile << "Probability of TT = " << tt_counter << endl;

}

void assignment_1::createDna()
{
	ofstream outputFile("AlbertoGaribay.txt", ios_base::app);

	int countChar = 0;
	int countLines = 0;

	string letter = "ACTG";

	while(countLines <= 1000)
	{
		double w = rand() * 1.0 / RAND_MAX;
		double x = rand() * 1.0 / RAND_MAX;
		double y = sqrt((-2) * log(w)) * cos (2 * M_PI * x);

		int z = standDev * y + mean;

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







