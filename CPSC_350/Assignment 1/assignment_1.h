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
#pragma once

using namespace std;

class assignment_1
{
	public:
		assignment_1();
		~assignment_1();

		string bigramString;

		int a_counter, c_counter, g_counter, t_counter;
		int aa_counter, ac_counter, ag_counter, at_counter;
		int ca_counter, cc_counter, cg_counter, ct_counter;
		int ga_counter, gc_counter, gg_counter, gt_counter;
		int ta_counter, tc_counter, tg_counter, tt_counter;

		int sum;
		int bigram_sum;
		int line_counter;

		float a_probab, c_probab, g_probab, t_probab;
		float aa_probab, ac_probab, ag_probab, at_probab;
		float ca_probab, cc_probab, cg_probab, ct_probab;
		float ga_probab, gc_probab, gg_probab, gt_probab;
		float ta_probab, tc_probab, tg_probab, tt_probab;

		double mean, variance, standDev; 

		int getSum();

		double getMean();
		double getVariance();
		double getStandDev();

		void readDnaFile(string dnaFile);
		void createDna();
		void standardDeviation();
		void bigramProbability();
		void nucle_Probability();

};