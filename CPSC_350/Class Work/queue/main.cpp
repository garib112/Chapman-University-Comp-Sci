#include <iostream>
#include "queue.h"

using namespace std;

int main (int argc, char **argv)
{
	GenQueue q(5);

	q.insert('k');
	q.insert('e');
	q.insert('c');
	q.insert('k');

	cout << "Peek: " << q.peek() << endl;
	cout << "Remove: " << q.remove() << endl;
	cout << "Peek: " << q.peek() << endl;
	cout << "Empty: " << q.isEmpty() << endl;

	q.insert('r');
	q.insert('e');
	q.insert('b');
	q.insert('e');

	
}