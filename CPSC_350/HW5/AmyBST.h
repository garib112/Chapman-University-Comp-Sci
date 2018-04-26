#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Commands.h"
using namespace std;

Commands::Commands() {
  ifstream sfile("studentTable.txt");
  ifstream ffile("facultyTable.txt");
  masterStudent = new BST<Student>;
  masterFaculty = new BST<Faculty>;
  if(sfile && ffile) {
    //iterate through files and create trees
    string line;
    int index = 1;
    //create faculty tree
    string name;
    int ID;
    string level;
    string department;
    int numOfAdvisees;
    Faculty current;
    int a;
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
        department = line;
        ++index;
      }
      else {
        current = Faculty::Faculty(name,ID,level,department);
        masterFaculty->insert(current,ID);
        toInt >> numOfAdvisees;
        index = 1;
        for (int i = 0; i < numOfAdvisees-1; ++i) {
          toInt >> a;
          current.addAdvisee(a);
        }
      }
    }

  }
  sfile.close();
  ffile.close();
}

Commands::~Commands() {

  ofstream studentFile;
  studentFile.open("studentTable.txt", ios::app);
  ofstream facultyFile;
  facultyFile.open("facultyTable.txt", ios::app);

  studentFile << "bob";
  //studentFile << cout << "bob";

  studentFile << masterStudent->toString(masterStudent->getRoot());
  facultyFile << masterFaculty->toString(masterFaculty->getRoot());
  delete masterStudent;
  delete masterFaculty;

  studentFile.close();
  facultyFile.close();

}
