#include "Quiz1.h" //user defined header file ""
#include <iostream> //system library < >

using namespace std;

Quiz1::Quiz1() //name of class :: name of the method
{

}
Quiz1::~Quiz1()
{
	cout<< "object deleted" << endl; //endln prints to new line
}

int Quiz1::countVowels(string input)
{
	int count = 0;
	for(int i = 0; i < input.size(); ++i)
	{
		if(input[i] == 'a')
			count++;
		else if(input[i] == 'e')
			count++;
		else if(input[i] == 'i')
			count++;
		else if(input[i] == 'o')
			count++;
		else if (input[i] == 'u')
			count++;
	}
	return count;
}


