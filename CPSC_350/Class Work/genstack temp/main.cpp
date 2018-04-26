#include <iostream>
#include "genstack.h"

using namespace std;

int main(int argc, char **arv)
{
	genstack<int> g(7);

	g.push(4);
	g.push(3);
	g.push(2);
	g.push(2);


	cout << "POP: " << g.pop() << endl;
	cout << "POP: " << g.pop() << endl;
	cout << "PEEK: " << g.pop() << endl;
	cout << "EMPTY: " << g.isEmpty() << endl;



	g.push(10);
	g.push(20);

	while(!g.isEmpty())
		cout << g.pop() << endl;

	return 0;


}
