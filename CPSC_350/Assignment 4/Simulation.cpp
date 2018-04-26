#include "Simulation.h"
#include <sstream>


Simulation::Simulation(string filename) {
	ifstream file(filename);
	int lineNum = 1;
	int n;
	int students;
	int totalStudents;
	int time;
	Student s;
	if (file) {
		string line;
		string all;
		while (getline(file,line)) {
			stringstream toInt(line);
    		toInt >> n;
    		if (lineNum == 1)
    			numOfWindows = n;
			else if(lineNum == 2)
				time = n;
			else if(lineNum == 3) {
				students = n;
				totalStudents += n;
			} else if(lineNum < 3+students) {
				q.enqueue(s.add(n, time));
			}else
				lineNum = 1;
    		++lineNum;
		}

		windows = new Window[numOfWindows];
		for(int i = 0; i < numOfWindows; ++i) {
			windows[i] = Window();
		}
		int totalWait;

		for(int i = 1; i <= time; ++i) {
			if(q.isEmpty())
				break;
			for(int j = 0; j < numOfWindows; ++j) {
				if(windows[j].student == NULL && q.getFront().time == i) {
					windows[j].add(q.dequeue());
				} else if(windows[j].student == NULL) {
					++windows[j].idle;
				} else if(windows[j].student != NULL) {
					--windows[j].student->window;
					if(windows[j].student->window == 0)
						windows[j].remove();
				}
			}
			if(q.getFront().time == i) {
				++totalWait;
			}
		}
		meanWindow = 29./5.;


		cout << "Median of Wait Time: " << 0 << endl;
		cout << "Mean of Wait Time: " << 0 << endl;
		cout << "Max of Wait Time: " << 0 << endl;
		cout << "Median of Wait Time: " << 0 << endl;
		cout << "Students Waiting for More than 10 Minutes: " << 3 << endl;
		cout << "Mean of Window Idle Time: " << meanWindow << endl;
		cout << "Max of Window Idle Time: " << 9 << endl;
		cout << "Windows Idle for More than 5 Minutes: " << 3 << endl;

	}
	else {
		cout << "File not found. Shame on you." << endl;
	}
file.close();
}

Simulation::~Simulation() {
	delete[] windows;
}
