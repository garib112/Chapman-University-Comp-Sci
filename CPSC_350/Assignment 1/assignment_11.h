/* 
Alberto Garibay
ID 2271460
garib112@mail.chapman.edu
CPSC 350-02
Assignment 01 
*/

#include <iostream> //input/output stream
#include <fstream>	//file stream
#include <string>	//allows the use of strings
#include <math.h> 	//allows the use of math functions
#include <locale>	//this allows for .toupper()/.tolower()

using namespace std;

class assignment_1
{
	public:
		assignment_1();
		~assignment_1();

		string bigramString;

		int A_counter, C_counter, G_counter, T_counter;
		int AA_counter, AC_counter, AG_counter, AT_counter;
		int CA_counter, CC_counter, CG_counter, CT_counter;
		int GA_counter, GC_counter, GG_counter, GT_counter;
		int TA_counter, TC_counter, TG_counter, TG_counter;

		int sum;
		int Bigram_sum;
		int line_counter;

		float A_probab, C_probab, G_probab, T_probab;
		float AA_probab, AC_probab, AG_probab, AT_probab;
		float CA_probab, CC_probab, CG_probab, CT_probab;
		float GA_probab, GC_probab, GG_probab, GT_probab;
		float TA_probab, TC_probab, TG_probab, TG_probab;

		double mean, variance, standardDeviation; 

		int getSum();

		double getMean();
		double getVariance();
		double getStandDev();

		void fileReader(string file);
		void createDna();
		void standardDeviation();
		void bigramProbability();
		void nucle_Probability();

};