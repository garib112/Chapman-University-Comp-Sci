#include <iostream>
#include "DoubleList.h"
#include "Simulation.h"

using namespace std;

int main(int argc, char** argv)
{
    string fileName;

    if(argc == 1)
    {
        cout << "Give a file name: "; cin >> fileName;
    }
    else if(argc > 2)
    {
        cout << "Error: invalid: " << argv[2] << " ... " << endl;
        return 0;
    }
    else
    {
        fileName = argv[1];
    }

    Simulation s(fileName);
}
