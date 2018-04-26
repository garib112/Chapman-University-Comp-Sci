#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "BST.h"
#include "Commands.h"
using namespace std;

Commands::Commands() {

}

/*
Commands::Commands() {
  ifstream sfile("studentTable.txt");
  ifstream ffile("facultyTable.txt");
  BST<Faculty> facultyTree;
  BST<Student> studentTree;
  if(sfile && ffile) {
    //iterate through files and create trees
    string line;
    int index = 1;
    //variables for person
    string name;
    int ID;
    string level;
    //create faculty tree
    Faculty current;
    string department;
    int numOfAdvisees;
    int a;
    while (getline(ffile,line)) {
      stringstream toInt(line);
      if(index == 1) {
        name = line;
        ++index;
      }
      else if (index == 2) {
        toInt >> ID;
        ++index;
      }
      else if (index == 3) {
        level = line;
        ++index;
      }
      else if (index == 4) {
        department = line;
        ++index;
      }

      else {
        current = Faculty::Faculty(name,ID,level,department);
        current.print();
        facultyTree.insert(current,ID);
        toInt >> numOfAdvisees;
        for (int i = 0; i < numOfAdvisees-1; ++i) {
          toInt >> a;
          //current.addAdvisee(a);
        }
        index = 1;
      }

    }
    current = Faculty::Faculty(name,ID,level,department);
    cout << "whom the fuck" << endl;
    facultyTree.insert(current,ID);
    cout << "whom the fuck" << endl;
    //create faculty tree
    index = 1;
    Student currentStudent;
    string major;
    int advisor;
    while (getline(sfile,line)) {
      stringstream toInt(line);
      if(index == 1) {
        name = line;
        ++index;
      }
      else if (index == 2) {
        toInt >> ID;
        ++index;
      }
      else if (index == 3) {
        level = line;
        ++index;
      }
      else if (index == 4) {
        major = line;
        ++index;
      }
      else {
        toInt >> advisor;
        currentStudent = Student::Student(name,ID,level,major,advisor);
        studentTree.insert(currentStudent,ID);
        index = 1;
      }
    }

  }
  sfile.close();
  ffile.close();
  cout << "MASTER FACULTY" << endl;
  masterFaculty = facultyTree;
  masterStudent = studentTree;
}
*/
Commands::~Commands() {
  ofstream studentFile;
  studentFile.open("studentTable.txt", ios::app);
  ofstream facultyFile;
  facultyFile.open("facultyTable.txt", ios::app);

  studentFile << masterStudent.toString(masterStudent.getRoot());
  facultyFile << masterFaculty.toString(masterFaculty.getRoot());

  studentFile.close();
  facultyFile.close();
}

void Commands::printStudents() {
  masterStudent.printTree();
}

void Commands::printFaculty() {
  masterFaculty.printTree();
}

void Commands::findStudent(int ID)
{
  masterStudent.search(ID).print();
}


void Commands::findFaculty(int ID) {
  masterFaculty.search(ID).print();
}

void Commands::printAdvisor(int ID)
{
  int advisorID = masterStudent.search(ID).advisor;
  findFaculty(advisorID);
}

void Commands::printAdvisees(int ID) {
  //we can't do this one
}

void Commands::addStudent(string theirName, string level, string theirMajor, int advisorID) {
  Student newStudent(theirName, 000000, level, theirMajor, advisorID);
  masterStudent.insert(newStudent,000000);
}

void Commands::deleteStudent(int ID) {
  masterStudent.deleteNodeID(ID);

}

void Commands::addFaculty(string theirName, string level, string theirDepartment) {
  Faculty newFaculty(theirName, 000000, level, theirDepartment);
  masterFaculty.insert(newFaculty,000000);
}

void Commands::deleteFaculty(int ID) {
  masterFaculty.deleteNodeID(ID);
}

void Commands::changeAdvisor(int studentID, int facultyID) {
  masterStudent.search(studentID).changeAdvisor(facultyID);
}

void Commands::removeAdvisee(int facultyID, int studentID) {
  //we can't do this one
}
