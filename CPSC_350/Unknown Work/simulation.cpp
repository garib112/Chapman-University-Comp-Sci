#include "Simulation.h"
#include <sstream>

Simulation::Simulation(string filename) {
	ifstream file(filename);
	int lineNum = 1;
	int n;
	int students;
	int totalStudents;
	int time;
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
			} else if(lineNum < 3+students)
				q.enqueue(Student(n, time));
			else
				lineNum = 1;
    		++lineNum;
		}
	} else {
		cout << "File not found. Shame on you." << endl;
	}
    file.close();

    windows = new Window[numOfWindows];
    for(int i = 0; i < numOfWindows; ++i) {
    	windows[i] = Window();
    }
    int totalWait;

    for(int i = 0; i < time; ++i) {
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

    
}

Simulation::~Simulation() {
	delete[] windows;
}