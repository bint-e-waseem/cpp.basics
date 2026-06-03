#include<iostream>
using namespace std;

void print(int *iptr, int SZ)
{
	for(int i=0; i<SZ; i++)
		//cout << *iptr << endl; 
		//cout << *iptr + i << endl;
		cout << * (iptr + i) << endl;
}

int main()
{
	int SIZE = 5;
	int num[SIZE] = {10, 20, 30, 40, 50};

	print(num, SIZE);
	
	return 0;
}
