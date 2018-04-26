//Alberto Garibay
//2271460
//garib112@mail.chapman.edu
//CPSC350 Sec-2
//Assignment 3

/*This is the delimiter class
its purpose is to put delimiters into a stack
and then check if there are any missing or missplaced delimiters */

#include "delimiterCheck.h"
#include "genstack.h"
#include <iostream>
#include <fstream>

using namespace std;

//this is the stack
genstack <char> g(10);

delimiterCheck::delimiterCheck()
{}

delimiterCheck::~delimiterCheck()
{}

//this reads the file and then pushes delimiters into the stack
void delimiterCheck::setDelimiter(string fileName)
{
  ifstream fileReader;
	fileReader.open(fileName);
  lineCounter = 0;

  //reads through line by line
  for(string line; getline (fileReader, line);)
  {
    lineCounter++; //increments everytime it reaches a new line
    //reads through character by character
    for (int i=0; i<line.length(); i++)
    {
			if (line[i]== '{')
      {
        if(!g.isEmpty())
        {
          if((g.peek() == ')') || (g.peek() == ']') || (g.peek() == '}'))
          {
            cout<< "Line: " << lineCounter << " incorrect delimiter '{'" << endl;
            fileReader.close();
            return;
          }
          else if((g.peek() == '(') || (g.peek() == '['))
          {
            cout<< "Line: " << lineCounter << " incorrect delimiter '{'" << endl;
            fileReader.close();
            return;
          }
          else
  				{
            g.push('{');
          }
        }
        else
        {
          g.push('{');
        }
			}
      else if (line[i]== '(')
      {
        if(!g.isEmpty())
        {
          if((g.peek() == ')') || (g.peek() == ']') || (g.peek() == '}'))
          {
            cout<< "Line: " << lineCounter << " incorrect delimiter '('" << endl;
            fileReader.close();
            return;
          }
          else
  				{
            g.push('(');
          }
        }
			}
      else if (line[i]== '[')
      {
        if(!g.isEmpty())
        {
          if((g.peek() == ')') || (g.peek() == ']') || (g.peek() == '}'))
          {
            cout<< "Line: " << lineCounter << " incorrect delimiter '['" << endl;
            fileReader.close();
            return;
          }
          else
  				{
            g.push('[');
          }
        }
			}
      else if (line[i]== '}')
      {
				if(g.peek() == '{')
        {
          g.pop();
        }
        else if((g.peek() == '[') || (g.peek() == '('))
        {
          cout<< "Line: " << lineCounter << " incorrect delimiter '}'" << endl;
          fileReader.close();
          return;
        }
        else if(g.isEmpty())
        {
          cout<< "Missing '{' in file" << endl;
          g.push('A');
          fileReader.close();
          return;
        }
        else
        {
          g.push('}');
        }
			}
      else if (line[i]== ')')
      {
        if(g.peek() == '(')
        {
          g.pop();
        }
        else if((g.peek() == '{') || (g.peek() == '['))
        {
          cout<< "Line: " << lineCounter << " incorrect delimiter ')'" << endl;
          fileReader.close();
          return;
        }
        else
        {
          g.push(')');
        }
			}
      else if (line[i]== ']')
      {
        if(g.peek() == '[')
        {
          g.pop();
        }
        else if((g.peek() == '{') || (g.peek() == '('))
        {
          cout<< "Line: " << lineCounter << " incorrect delimiter ']'" << endl;
          fileReader.close();
          return;
        }
        else
        {
          g.push(']');
        }
			}
    }
  }

  fileReader.close();
}


//determines if a the file is perfect
void delimiterCheck::stackCheck()
{
    if(g.isEmpty())
    {
      cout<<"Your delimiters are in order and your file is OK!"<< endl;
    }

}
