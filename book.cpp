/*Write a C++ program that defines a structure named book with the following members:
string title
string author
int pages
double price
In the main() function:
Declare one variable of type book.
Take input from the user for all fields (title, author, pages, price).
Finally, display all the details of the book in a single line, like this:  array loop*/     
#include<iostream>
#include<string>
using namespace std;

struct book  
{ 
   string title;
   string author;
   int pages;
   double price;
}; 
int main() 

{    int b ;
     const int size=5;
     book b1[size];  
	
	
      for(int i=0; i<size ;  i++ )
	{
	     
    cout << "book " << i+1 << ": " << endl;
	cout<<"please enter title of the book:";
	cin.ignore();
	getline(cin,b1[i].title);
    cout<<"please enter author name:";
    cin.ignore();
	getline(cin, b1[i].author);
    cout<<"please enter pages of the book:";
	cin>>b1[i].pages;
	cout<<"please enter the price of the book:";
	cin>>b1[i].price;
	
     }
     cout<<"enter the detail:"<<endl;
	for( int i=0 ; i<5 ; i++){
	 
	cout<<"tille:"<<b1[i].title<<"----"<<
	"author:"<<b1[i].author<<"----"<<"pages:"<<b1[i].pages<<"----"<<"price:"<<b1[i].price<<endl;
	
}
	return 0;
}
