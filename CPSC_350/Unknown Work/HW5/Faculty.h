#include <iostream>
#include <list>
using namespace std;

class Faculty
{
public:
	Faculty();
	Faculty(string theirName, int IDnum, string theirLevel, string theirDepartment);
	~Faculty();

	string name;
	int ID;
	string level;
	string Department;
	//list<int> listAdvisees;

	string toString;

	void print();
};
