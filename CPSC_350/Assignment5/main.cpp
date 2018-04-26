#include <iostream>
#include <sstream>
#include "Commands.h"
using namespace std;

int main(int argc, char** argv) {
	Commands m;
	int answer;
	int ID;
	string name;
	string level;
	string major;
	int advisorID;
	string response;
	int studentID;
	int facultyID;
	string department;
	do {
		cout << "Enter an integer for one of the following options: " << endl;
		cout << "1. Print all students and their information." << endl;
		cout << "2. Print all faculty and their information." << endl;
		cout << "3. Find and display student information." << endl;
		cout << "4. Find and display Faculty information" << endl;
		cout << "5. Print the name and info of a student's faculty advisor." << endl;
		cout << "6. Print out advisees of an Advisor." << endl;
		cout << "7. Add new student." << endl;
		cout << "8. Add a new Faculty Member" << endl;
		cout << "10. Delete a Faculty Member" << endl;
		cout << "11. Change a student's advisor" << endl;
		cout << "12. Exit." << endl;

		/*
		void printStudents();
		void printFaculty();
		void findStudent(int ID);
		void findFaculty(int ID);
		void printAdvisor(int ID);
		void printAdvisees(int ID);
		void addStudent(string theirName, string level, string theirMajor, int advisorID);
		void deleteStudent(int ID);
		void addFaculty(string theirName, string level, string theirDepartment);
		void deleteFaculty(int ID);
		void changeAdvisor(int studentID, int facultyID);
		void removeAdvisee(int facultyID, int studentID);
		*/

		cin >> response;
		stringstream toInt(response);
		toInt >> answer;

		if (answer == 1) {
			m.printStudents();
		}
		else if (answer == 2) {
			m.printFaculty();
		}
		else if (answer == 3) {
			cout << "Please provide the ID: " << endl;
			cin >> response;
			stringstream toInt(response);
			toInt >> ID;
			m.findStudent(ID);
		}
		else if (answer == 4) {
			cout << "Please provide the ID: " << endl;
			cin >> response;
			stringstream toInt(response);
			toInt >> ID;
			m.findFaculty(ID);
		}
		else if (answer == 5) {
			cout << "Please provide the ID: " << endl;
			cin >> response;
			stringstream toInt(response);
			toInt >> ID;
			m.printAdvisor(ID);
		}
		else if (answer == 6) {
			cout << "Please provide the ID: " << endl;
			cin >> response;
			stringstream toInt(response);
			toInt >> ID;
			m.printStudents();
		}
		else if (answer == 7) {
			cout << "Please provide the Name: " << endl;
			cin >> name;

			cout << "Please provide the level: " << endl;
			cin >> level;

			cout << "Please provide the major: " << endl;
			cin >> major;

			cout << "Please provide the Advisor ID: " << endl;
			cin >> response;
			stringstream toInt(response);
			toInt >> advisorID;

			m.addStudent(name, level, major, advisorID);
		}
		else if (answer == 8) {
			cout << "Please provide the ID: " << endl;
			cin >> response;
			stringstream toInt(response);
			toInt >> ID;
			m.deleteStudent(ID);
		}
		else if (answer == 9) {
			cout << "Please provide the Name: " << endl;
			cin >> name;

			cout << "Please provide the level: " << endl;
			cin >> level;

			cout << "Please provide the Department: " << endl;
			cin >> department;

			cout << "Please provide the Advisor ID: " << endl;
			cin >> response;
			stringstream toInt(response);
			toInt >> advisorID;

		}
		else if (answer == 10) {
			cout << "Please provide the ID: " << endl;
			cin >> response;
			stringstream toInt(response);
			toInt >> ID;
			m.deleteFaculty(ID);
		}
		else if (answer == 11) {
			cout << "Please provide the student ID: " << endl;
			cin >> response;
			stringstream toInt(response);
			toInt >> studentID;
			cout << "Please provide the new Faculty ID: " << endl;
			cin >> response;
			stringstream integer(response);
			integer >> facultyID;
			m.changeAdvisor(studentID,facultyID);
		}
		else if (answer < 12)
			cout << "Invalid input! Shame on you." << endl;


	}
	while(answer != 12);



}
