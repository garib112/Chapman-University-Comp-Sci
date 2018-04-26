#include "BST.h"
#include "Student.h"
#include "Faculty.h"

class Commands {
private:
  BST<Student> masterStudent;
  BST<Faculty> masterFaculty;
public:
  Commands();
  ~Commands();

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
};
