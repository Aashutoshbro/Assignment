/*Program 17: Write a program to add two complex numbers using friend
function.*/

#include <iostream>
using namespace std;

class complex
{
    int real;
    int imag;

public:
    void get_data()
    {
        cout << "Enter real and imaginary part of complex num :" << endl;
        cin >> real;
        cin >> imag;
    }
    friend void add(complex o1, complex o2);
};
void add(complex o1, complex o2)
{
    o1.real = o1.real + o2.real;
    o1.imag = o1.imag + o2.imag; 
    cout << "Sum is :  " << endl;
    cout << o1.real << "+" << o1.imag << "i"  << endl;
}
int main()
{
    complex obj1, obj2;
    obj1.get_data();
    obj2.get_data();
    add(obj1, obj2);
    
    return 0;
}
