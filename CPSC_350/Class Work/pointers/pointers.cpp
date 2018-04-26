#include <iostream>

using namespacestd; 

//protypte / Signature before use

void print_arr(int* arr, int size);
void pass_value(int a);
void pass_ref(int* a);

int main(int argc, char** argv)
{
	int a[] = { 1 , 2 , 3 };
	int* ap = &a[0];

	cout << endl;
	cout << "ap: " << ap << endl;
	cout << "ap+1" << ap+1 << endl;

	cout << endl;
	cout << "* ap" << *(ap) << endl;
	cout << "* ap+1" << *(ap+1) << endl;
	cout << "a[1]" << a[1] << endl;

	print_arr(a, 3);

	cout << "** PASSING **" << endl;
	int b = 10;
	cout<< "b: " << b << endl;
	pass_value(b);
	cout << "b: " << b << endl;
	pass_ref(&b);
	cout << "b: " << b << endl;

 }

 void pass_value(int a)
 {
 	cout << ++a << endl:

 }

 void pass_ref(int* a)
 {
 	cout << ++(*a) << endl;
 }

 void print_arr(int* arr , int size)
 {
 	for(int i = 0; i < size; ++i)
 	{
 		cout << arr[i] << endl;
 		//cout << *(arr+i+10000) << endl;
 	}
 }