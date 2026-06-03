//Design a class decimalList that has an array of decimal numbers. 
//The constructor should accept an integer argument and dynamically allocate the array to hold that many numbers. 
//The destructor should free the memory held by the array. 
//In addition, there should be member functions to perform the following operations: 
//?AddElement(int index, double val) —Store a number in any element of the array 
//?getHighest() — Return the highest value stored in the array 
//?getLowest() — Return the lowest value stored in the array.
//?getAverage()— Return the average of all the numbers stored in the array 
//Write a main() that demonstrates the decimalList class by asking the array size,
// inputting elements, then reporting the highest, lowest and average of elements.

#include<iostream>
using namespace std;
class decimallist
{
	double *arr;
	int size;
	public:
		decimallist(int s)
		{
			size = s;
			arr =new double[size];
			for(int i=0; i<s; i++)
			{
				arr[i] = 0.0;
			}
		}
		~decimallist()
		{
			cout << " destructor here ...... i am deleting constructor";
			delete []arr;	
		}
		void AddElement(int index, double val) {
        if (index >= 0 && index < size) {
            arr[index] = val;
        } else {
            cout << "Index out of range!" << endl;
        }
        }
		void gethighest()
		{
			
			double highest = arr[0];
			for(int i=0; i <size; i++)
			{
				if(arr[i] > highest)
				highest = arr[i];
			}
			cout << "highest is about" << highest << endl;
		}
		void getlowest()
		{
			double lowest = arr[0];
			for(int i=0; i<size; i++)
			{
				if (lowest> arr[i])
				lowest = arr[i];
			}
			cout << "lowest is about :" << lowest << endl;
		}
		void getavg( )
		{
			double sum =0.0;
			for(int i=0; i<size; i++)
			{
				sum += arr[i];
			}
			int avg;
			avg = sum/size;
			cout << "avg is about :" << avg << endl;
		}
};
int main()
{
	int size;
	cout  << "enter the size ";
	cin >> size;
	decimallist list(size);
	cout << "Enter " << size << " decimal numbers:" << endl;
    for (int i = 0; i < size; i++) {
        double val;
        cout << "Element " << i + 1 << ": ";
        cin >> val;
        list.AddElement(i,val) ;
    }
    list.gethighest();  
    list.getlowest(); 
    list.getavg() ;
	return 0;
}
