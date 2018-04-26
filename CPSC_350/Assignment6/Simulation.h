#include <iostream>
using namespace std;

class Simulation
{
public:
  Simulation(string filename);
  ~Simulation();

  int size;
  int* bubble_array;
  int* insertion_array;
  int* quicksort_array;

  void bubbleSort();
  void insertionSort();
  void runQuickSort();
  void quickSort(int* myArray, int left, int right);

};
