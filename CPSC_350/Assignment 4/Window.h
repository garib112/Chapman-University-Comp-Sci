#ifndef WINDOW_H
#define WINDOW_H
#include "Student.h"

class Window {
public:
	Window();
	Window(Student s);
	~Window();

	void add(Student s);
	void remove();

	int idle;
	Student *student;
};

#endif