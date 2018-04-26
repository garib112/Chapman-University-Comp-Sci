#include <iostream>
using namespace std;

class Student
{
public:
	Student();
	Student(string theirName, int IDnum, string theirLevel, string theirMajor, double theirGPA, int theirAdvisor);
	~Student();

	int returnIDofAdvisor();

	string name;  
	int ID;
	string level;
	string Major;
	double GPA;
	int Advisor;

	string toString;

	void print();
};
