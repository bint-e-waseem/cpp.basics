#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "how many integers you want to enter: \n";
	cin >> n;
	int *arr = new int[n];
	
	cout << "please enter the integers: \n";
	for(int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	int *p = arr;
	int minval = *p;
	int maxval = *p;
	for(int i = 1;i< n;i++)
	{
		p++;
		if(*p > maxval)
		{
			maxval = *p;
		}
		if(*p < minval)
		{
			minval = *p;
		}
	}
	cout << "max is" << maxval << endl;
	cout << "min is: "<< minval << endl;
	delete[] arr;
	return 0;
    
}