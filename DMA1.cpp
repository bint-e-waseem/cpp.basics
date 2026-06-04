#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "enter the number of sudents in class: ";
	cin >> num;
	int *marks = new int[num];
	cout << "enter marks of " << num << " students: \n";
	for (int i = 0; i< num;i++)
	{
		cin >> marks[i];
	}
	int sum = 0;
	for(int i = 0;i<num;i++)
	{
		sum+= marks[i];
	}
	double average = (double)sum/num;
	cout << "average marks: "<< average << endl;
	delete[] marks;
	return 0;
}