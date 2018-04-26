#ifndef STUDENT_H
#define STUDENT_H


class Student
{
public:
    Student();
    Student(int timeAtWindow, int timeArrived);
    ~Student();

    Student add(int timeAtWindow, int timeArrived);

    int time;
    int window;
    int wait;
};

#endif