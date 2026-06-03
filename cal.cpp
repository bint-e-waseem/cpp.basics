  // calculator ki try //
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int sum, sub , multi, division, w, e , power;
	cout << "enter a number : ";
	cin >> w ;
	cout << "enter a number here :";
	cin >> e;
	sum = w + e;
	cout << "sum is " << sum <<"\n";
	sub = w +e;
	cout << "sub is " << sub << "\n";
	multi = w + e;
	cout <<  "multiplication of numbers are " << multi << "\n";
	division = w+ e;
	cout << "division is " << division  << "\n";
	power = pow(w,e);
	cout <<  "power of number is " << power << "\n";
	double c, t, s ,ci ,ti, si;
	c = cos(e);
	ci = cos (w);
	cout << "cos of value of e is " << c << endl ;
	cout << "cos of value of w is " << ci << endl;
	t = tan (w);
	ti = tan (e);
	cout << "tan of value of w is : " << t << endl;
	cout << "tan of value of e is : " << ti << endl;
	si = sin (w);
	s = sin (e);
	cout << "sin of function e is : " << s << endl;
	cout << "sin of function of w is : " << si << endl;
	return 0;
}
