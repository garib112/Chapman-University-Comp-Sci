#include <iostream>
#include "genstack.cpp"

using namespace std;

int main(int argc, char **arv)
{
	genstack g(7);

	g.push('a');
	g.push('l');
	g.push('b');
	g.push('e');
	g.push('r');
	g.push('t');
	g.push('o');

	cout << "POP: " << g.pop() << endl;
	cout << "POP: " << g.pop() << endl;
	cout << "PEEK: " << g.pop() << endl;
	cout << "EMPTY: " << g.isEmpty() << endl;

	g.push('m');
	g.push('x');

	while(!g.isEmpty())
		cout << g.pop() << endl;

	return 0;


}