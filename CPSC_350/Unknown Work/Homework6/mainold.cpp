#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

  string fileName;

  if(argc == 1)
  {
      cout << "Give a file name: "; cin >> fileName;
  }
  else if(argc > 2)
  {
      cout << "Error: invalid: " << argv[2] << " ... " << endl;
      return 0;
  }
  else
  {
      fileName = argv[1];
  }



  ifstream file(fileName);
	int lineNum = 1;
  int n;
  int numofItems;
  int currInArr = 0;
  int *bubble;
  int *insertion;
  int *quick;

	if (file)
  {
		string line;
		while (getline(file,line))
    {
			stringstream toInt(line);
      toInt >> n;
    	if(lineNum == 1)
      {
        numofItems = n;
        bubble = new int[numofItems];
        insertion = new int[numofItems];
        quick = new int[numofItems];
      }
      else
      {
        bubble[currInArr] = n;
        insertion[currInArr] = n;
        quick[currInArr] = n;
      }
      ++lineNum;
      ++currInArr;
		}
  }

  for(int i = 0; i < numofItems ; i++)
  {
    cout << bubble[i];
  }
  cout<< endl;

  for(int i = 0; i < numofItems ; i++)
  {
    cout << insertion[i];
  }
  cout<< endl;

  for(int i = 0; i < numofItems ; i++)
  {
    cout << quick[i];
  }
  cout<< endl;
}

/*
  void bubbleSort(int myArray[])
  {
  	for(int i = 0; i < 10; ++i)
  	{
      int temp = 0;
      for(int j = i ; j < 9; ++j)
  	  {
        if(myArray[j] > myArray[j + 1])
  		    {
  		        temp = myArray[j+1];
  		        myArray[j+1] = myArray[j];
  		        myArray[j] = temp;
  		    }
  	  }
  	}
  }


  void insertSort(double[] arr)
	{
		for(int j =1; j <10; ++i) //marker
		{
			double temp = arr[j]; // store marked item
		 	int k = j; //where to start shifting
			while (k>0 && arr [k-1] >=temp)
      // while the thing to the left is larger, shift
      {
	       arr[]=arr[k-1];
	        --k;
        }
        arr[k] = temp; // put marked item in right spot
      }
	  }

    void quickSort(double[] s)
    {
      if s.size() ≤ 1
      {
        break;
			}

      //make this a pointer
      *p -> S.back().element(); //{the pivot}
      //Let L, E, and G be empty list-based sequences

      while ()!s.empty()) do {scan S backwards, dividing it into L, E, and G}
      {

        if (s.back().element() < p)
        {
          L.insertBack(s.eraseBack());
        }

        else if (s.back().element() = p)
        {
          E.insertBack(s.eraseBack());
        }

        else //{the last element in S is greater than p}
        {
          G.insertBack(s.eraseBack();)
				}

        QuickSort(L); //{Recur on the elements less than p}
        QuickSort(G); //{Recur on the elements greater than p}

        while (!L.empty()) do {copy back to S the sorted elements less than p}
        {
		      s.insertBack(L.eraseFront());
        }

        while (!E.empty()) do {copy back to S the elements equal to p}
        {
		        S.insertBack(E.eraseFront());
        }

        while (!G.empty()) do {copy back to S the sorted elements greater than p}
        {
          S.insertBack(G.eraseFront());
        }
    }
*/
