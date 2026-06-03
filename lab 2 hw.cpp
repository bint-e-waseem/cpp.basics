//Write a function that accepts an int array and the array’s size as arguments. The 
//function should create a new array that is one element larger than the argument array.
// The first element of the new array should be set to 0. Element 0 of the argument 
//array should be copied to element 1 of the new array, element 1 of the argument 
//array should be copied to element 2 of the new array, and so forth. The function 
//should return a pointer to the new array.
#include<iostream>
using namespace std;
int *expo(int arr1[], int size)
{
	int *ptr = new int[size + 1];
	ptr[0]=0;
	for(int i=0; i<size; i++)
	{
		ptr[i + 1] = arr1[i];
	}
	return ptr;
}
int main()
{
	int arr1[4] ={23,67,90,67};
	int *iptr = expo(arr1, 4);
	for(int i=0; i<4; i++)
	{
		cout << "array display " << endl;
		cout << iptr[i] << endl;
	}
	delete iptr;
	return 0;
}
