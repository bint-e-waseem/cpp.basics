// write a pro that ask a user to enter a number within a range 1 to 10 use else if statement to display its roman numeriral version of that statement//
#include<iostream>
using namespace std;
int main() 
{
    int num;
    cout << "enter anumber";
    cin >> num; 
    
    if(num==1)
	{
	
     cout << "number is i";
    }
else if(num==2)
{
	cout << "number is ii";
}
	else if(num==3)
	{
		cout << "number is iii";
	}
	else if(num==4){
		cout << "number is iv";
	}
	else if(num==5){
		cout << "number is v";
	}
	else if(num==6){
		cout << "num is vi";
	}
	else if(num==7){
		cout << "num is vii";
	}
	else if(num==8){
		cout << "number is viii";
	}
	else if(num==9){
		cout << "number is ix";
	}
	else if(num==10) 
	{
	cout << "num is x";
	}
	if(num<0||num>10)
	{
		cout << "number is invalid ";
	}
	
	
	
	return 0;
	
}
