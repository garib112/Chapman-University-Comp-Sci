#include "Simulation.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <ctime>
using namespace std;

Simulation::Simulation(string filename)
{
  //open file;
  ifstream f(filename);
  if (f)
  {
		string line;
    int lineNum = 1;
  	int n;

    //read the file and put the info into the arrays
		while (getline(f,line))
    {
      //converts the read number from a string to an int
			stringstream toInt(line);
    	toInt >> n;
    	if (lineNum == 1)
      {
        size = n;
        bubble_array = new int[size];
        insertion_array = new int[size];
        quicksort_array = new int[size];
        ++lineNum;
			}
      else
      {
        bubble_array[lineNum-2] = n;
        insertion_array[lineNum-2] = n;
        quicksort_array[lineNum-2] = n;
        ++lineNum;
        if(lineNum-1 == size)
        {
          break;
        }
      }
		}
  }
  else
  {
	    cout << "File not found. Shame on you." << endl;
  }
  f.close();
}

Simulation::~Simulation()
{
  delete[] bubble_array;
  delete[] insertion_array;
  delete[] quicksort_array;
}


void Simulation::bubbleSort()
{
  int* arr = bubble_array;
  cout << "Bubble Sort" << endl;
  cout << "Start time: " << (double)clock()/(double)CLOCKS_PER_SEC << endl;
	for(int i = 0; i < size-1; ++i) {
		int temp = 0;
		for (int j = 0; j < size - 1 - i; ++j) {
			if(arr[j] > arr[j+1]) {
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
  cout << "End time: " << (double)clock()/(double)CLOCKS_PER_SEC << endl;
}

void Simulation::insertionSort()
{
  int* arr = insertion_array;
  cout << "Insertion Sort" << endl;
  cout << "Start time: " << (double)clock()/(double)CLOCKS_PER_SEC << endl;
	for(int j = 1; j < size; ++j)
  {
		double temp = arr[j];
		int k = j;

		while (k>0 && arr[k-1] >= temp)
    {
			arr[k] = arr[k-1];
			--k;
		}
		arr[k] = temp;
	}
  cout << "End time: " << (double)clock()/(double)CLOCKS_PER_SEC << endl;
}

void Simulation::quickSort(int* myArray, int left, int right)
{
      int i = left;
      int j = right;
      int temp;
      int pivot = myArray[(left + right) / 2];

      while (i <= j)
      {
            while (myArray[i] < pivot)
            {
              i++;
            }
            while (myArray[j] > pivot)
            {
              j--;
            }
            if (i <= j)
            {
                  temp = myArray[i];
                  myArray[i] = myArray[j];
                  myArray[j] = temp;
                  i++;
                  j--;
            }
      };

      if (left < j)
      {
        quickSort(myArray, left, j);
      }
      if (i < right)
      {
        quickSort(myArray, i, right);
      }
}

void Simulation::runQuickSort() {
  cout << "QuickSort" << endl;
  cout << "Starttime: " << (double)clock()/(double)CLOCKS_PER_SEC << endl;
  quickSort(quicksort_array,0,size);
  cout << "Endtime: " << (double)clock()/(double)CLOCKS_PER_SEC << endl;
}
