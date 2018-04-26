#include <iostream>
#include "Window.h"
#include "Student.h"

Window::Window() {
	student = NULL;
}

Window::Window(Student s) {
	*student = s;
}

Window::~Window() {
	student = NULL;
}

void Window::add(Student s) {
	student = &s;
}

void Window::remove() {
	student = NULL;
}