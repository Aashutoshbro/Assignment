/*Program 6: Write a program to input two vectors coordinates from a base class
named ‘Base’. Class ‘Derived’ inherits all the properties of class Base. Class
‘Derived’ must contain a function named add_vector( ) that add the two vectors
input from the base class and finally display the result from a function
display() that is friend with the base class*/

#include <iostream>
using namespace std;
class Derived;
class Base
{
public:
    int x;
    int y;
    void input()
    {
        cout << "Enter two vectors coordinates ai+bj, enter like a  b" <<endl;
        cin >> x;
        cin >> y;
    }
    friend void display(Base);
};

class Derived : public Base
{
public:
    void add_vector(Base &o1, Base &o2)
    {
        o1.input();
        o2.input();
        o1.x = o1.x + o2.x;
        o1.y = o1.y + o2.y;
    }
};
void display(Base o1)
{
    cout << "Sum of given two vector is:"<<endl;
	cout <<o1.x <<"i+" << o1.y <<"j" <<endl;
}

int main()
{
    Base o1,o2;
    Derived obj1;
    obj1.add_vector(o1, o2);
    display(o1);
    return 0;
}
