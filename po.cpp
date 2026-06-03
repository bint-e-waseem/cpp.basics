// write a pro that perform basic airthmetic operation using a menu approach prompt the user to enter the numbers and that choose the operation from menu use a switch satement and do while loop to keep displaying menu until select option 5.//

#include<iostream>
using namespace std;
int main()
{
	
	int x,y,choice;
	do{
	cout <<  "ENTER two  VALUEs:";
	cin >> x >> y;

	
	cout << " menu here\n";
	cout << "1 add\n"
	 << " 2 sub\n" 
	 << " 3 division\n"
	  << " 4 product\n" ;
	cin >> choice ;
	switch(choice)
	{
	case 1:
		cout << x+y; 
		break;
	case 2:
	     cout << x-y;
		 break;
	case 3:
		cout << x/y;
		 break;
	case 4:
		cout << x*y;
		 break;
	case 5:
		cout << "\n ENTER AGAIN \n";
		break;}
	
	}	while( choice != 5);
	return 0;
}
