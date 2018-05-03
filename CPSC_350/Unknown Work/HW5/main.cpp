#include "BST.h"
#include "Student.h"
#include "Faculty.h"

using namespace std;

int main(int argc, char** argv)
{
  BST <Student> st;
  Student j("John",1234,"Freshmen","CompSci",3.4,1234);
  Student m("Mark",3333,"Junior","ScreenWriting",3.6,2245);
  Student a("Alberto",1000,"Sophmore","SoftEngineering",3.8,5643);

  BST<Faculty> ft;
  Faculty r("Rene",5643,"Lectuer","CompSci");


  st.insert(j,1234);
  st.insert(m,3333);
  st.insert(a,1000);

  ft.insert(r,5643);

  st.returnAdvisorID(1000);


}
