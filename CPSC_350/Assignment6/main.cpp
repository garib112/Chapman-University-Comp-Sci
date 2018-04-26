#include <iostream>
#include <time.h>
#include "Simulation.h"
using namespace std;



int main(int argc, char** argv)
{
  time_t start = time(0);
  string filename;

	if (argc == 1) {
		cout << "Enter a file name: "; cin >> filename;
	} else if (argc > 2) {
		cout << "Error: Invalid command line argument(s): '" << argv [2] << "'..." << endl;
		return 0;
	} else {
		filename = argv[1];
	}

  Simulation simulate(filename);
  simulate.bubbleSort();
  simulate.insertionSort();
  simulate.runQuickSort();

  return 0;
}
