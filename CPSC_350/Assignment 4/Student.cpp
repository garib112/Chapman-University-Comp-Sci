#include "Student.h"
#include <iostream>

using namespace std;

Student::Student()
{

}

Student::Student(int timeAtWindow, int timeArrived)
{
    window = timeAtWindow;
    time = timeArrived; 
}


Student::~Student()
{
    
}

Student Student::add(int timeAtWindow, int timeArrived)
{
    window = timeAtWindow;
    time = timeArrived;
    return Student(window,time);
}