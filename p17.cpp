#include<iostream>
using namespace std;
int* maxim(int* arr,int size)
{
	int maximum = arr[0];
	for(int i = 0;i< size;i++)
	{
		if(arr[i] > maximum)
		{
			 maximum = arr[i];
		}
	}
	int* maxi = new int[size];
	for(int i =0; i < size;i++)
	{
		maxi[i] = maximum;
	}
	return maxi;
}
int main()
{
	int arr[3] = {2,3,4};
	int* maxi = maxim(arr,3);
	for(int i = 0; i < 3;i++)
	{
		cout << maxi[i];
	}
	delete [] maxi;
	return 0;
}