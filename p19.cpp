/*Write a function mergeArrays() that accepts two arrays and their sizes.
The function should create a new array containing elements of both arrays merged together.
Return the pointer to the new array and demonstrate it in main()*/
#include<iostream>
using namespace std;
int* merge(int* arr1,int* arr2,int size1,int size2)
{
	int* mer = new int[size1+size2];
	for(int i = 0;i<size1;i++)
	{
		mer[i] = arr1[i];
	}
	for(int i = 0;i<size2;i++)
	{
		mer[size1+i] = arr2[i];
	}
	return mer;
}
int main()
{
	int size1 = 5,size2 = 6;
	int newsize = size1+size2;
	int arr1[size1] = {0,1,2,3,4};
	int arr2[size2] = {2,3,4,5,6,7};
	
	int* merging = merge(arr1,arr2,size1,size2);
	cout << "original array 1 is: ";
	for(int i=0;i<size1;i++)
	{
		cout << arr1[i]<< " ";
	}
	cout << "original array 2 is: ";
	for(int i=0;i<size2;i++)
	{
		cout << arr2[i]<< " ";
	}
	cout << "\n this is the upgraded array: ";
	for(int i=0;i<newsize;i++)
	{
		cout << merging[i]<<" ";
	}
	delete[] merging;
	return 0;
}