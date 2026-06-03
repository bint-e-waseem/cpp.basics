/*Write a Circle class that has the following member variables: 
?radius—a double 
?pi—a double initialized with the value 3.14159 
The class should have the following member functions: 
?Default Constructor—a default constructor that sets radius to 0.0 
?Constructor—accepts the radius of the circle as an argument 
?setRadius—a mutator function for the radius variable 
?getRadius—an accessor function for the radius variable 
?getArea—returns the area of the circle, which is calculated as area = pi * radius * radius 
?getDiameter—returns the diameter of the circle, which is calculated as 
diameter = radius * 2 
?getCircumference—returns the circumference of the circle,
 which is calculated as circumference = 2 * pi * radius 
Write a main() that demonstrates the Circle class by asking the user for the 
circle’s radius, creating a Circle object, then reporting the circle’s area, diameter, 
and circumference*/
#include<iostream>
using namespace std;
class circle
{
	double radius;
	const double PI= 33.14159;
public:
	circle()
	{
		radius = 0.0;
	}
	circle(double r)
	{
		radius = r;
	}
    int  getRadius()
	{
		return radius;
	}
	double getarea()
	{
	
	double area = PI * radius *radius;	
	return area;
	}
	double getdiameter()
	{
		double diameter = radius * 2;
		return diameter;
	}
	int getcircumference()
	{
		double circumference = 2* PI * radius;
		return circumference;
	}
};
int main()
{
	double radius;
	cout << "enter radius plz : ";
	cin >> radius;
	circle CIRCLE(radius);
	CIRCLE.getRadius();
	cout << "the area of circle is " << CIRCLE.getarea() <<endl;
	cout << "the diameter of circle is about " << CIRCLE.getdiameter() <<endl;
	cout << "the circumference of circle is " << CIRCLE.getcircumference() <<endl;
	return 0;
}
