#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct payroll{
	int employeenum;
	string name;
	double hours;
	double payrate;
	double grosspay;
};
int main()
{
	payroll employee;
	cout << "Enter the number of employees ";
	cin >> employee.employeenum;
	
	cout << "Enter the name of employee ";
	cin >> employee.name;
	
	cout << "How many hours did the employee work ";
	cin >> employee.hours;
	
	cout << "Enter the rate per hour ";
	cin >> employee.payrate;
	
	employee.grosspay = employee.hours*employee.payrate;
	
	cout << "\n-------Displaying the attributes------------\n ";
	cout << "\nName is " << employee.name;
	cout << "\nNum  is " << employee.employeenum;
	cout << "\nWork done in hours " << employee.hours;
	cout << "\nPayrate is " << employee.payrate;
	cout << "\nGross pay is " << employee.grosspay;
	return 0;
}