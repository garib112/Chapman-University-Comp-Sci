#include <iostream>
#include <fstream>
#include <string>
#include "Queue.h"
#include "Student.h"
#include <cstdlib>



using namespace std;

class simulation
{
    simulation(string fileName);
    ~simulation();

    int numOfWindows;

    int meanStudent;
    //int medianStudents;
    int maxStudent;
    int numWaiting;

    int meanWindow;
    int maxWindow;
    int numIdle;

    Queue<Student> q;
    char* windows;


};