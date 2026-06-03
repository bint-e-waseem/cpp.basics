/*Create a class Student with:
?Private data members:
string name
int age
float gpa
?Public member functions:
void setName(string n)
void setAge(int a)
void setGPA(float g)
string getName() const
int getAge() const
float getGPA() const
(Use const with getter functions to ensure they do not modify the object.)
In main():?Create two student objects and set their values using setters.
?Display their values using getters.
?Create a pointer to a Student object, set values using -> operator, and display details.*/
#include<iostream>
#include<string>
using namespace std;
class student
{
private:
	string name;
	int Age;
	float GPA;
public:
void setname(string n)	
{
    name = n;
}
void setAge(int a)
{
	Age = a;
}
void setGPA(float g)
{
	GPA = g;
}
string getname()const
{
	return name;
}
int getAge()const
{
	return Age;
}
float getGPA() const
{ 
    return GPA;
}
};
int main()
{
	student s1;
	student s2;
	s1.setname("ali");
	s1.setAge(18) ;
	s1.setGPA(2.90) ;
	s2.setAge(19) ;
	s2.setGPA(3.2);
	s2.setname("bilal") ;
	cout << " s1 attributes are : ";
	cout << s1.getname() <<"     " <<  s1.getAge() <<"      "<< s1.getGPA()  << endl;
	cout << " s2 have following attributes are  : " ;
	cout << s2.getname() <<"       "<<  s2.getAge() << "       " <<s2.getGPA()<< endl ;
	student *ptr = new student();
	ptr->setname("charlie");
    ptr->setAge(20);
    ptr->setGPA(3.5);
    cout << "Pointer object attributes are: ";
    cout << ptr->getname() << "      " << ptr->getAge() << "         " << ptr->getGPA() << endl;
    delete ptr;
	return 0;
}
