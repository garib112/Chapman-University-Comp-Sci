#include "Window.h"
#include "Queue.h"
#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Simulation {
public:
	Simulation(string filename);
	~Simulation();

	int numOfWindows;

	double meanStudent;
	int medianStudent; //how the hell
	int maxStudent;
	int numWaiting;

	double meanWindow;
	int maxWindow;
	int numIdle;

	Queue<Student> q;
	Window* windows;
};
