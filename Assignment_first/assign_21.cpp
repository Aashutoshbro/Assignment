/*Program 21: Write a program to add two complex numbers. Your program
should have three objects. Each object contains two attributes (ie. real and
imaginary part). Now add each attribute and save them into third object
separately. Use the concept of ‘+’ operator overloading. */

#include <iostream>
using namespace std;

class complex
{
    int real;
    int imag;

public:
    complex(){ }
    
    complex(int a, int b)
    {
    real = a;
    imag = b;
    }
    
    void display()
    {
    cout << "Sum of two complex number is : " << endl;
    cout << real << "+" << imag << "i" << endl;
    }
    void show(){
    	cout << real << "+" << imag << "i" << endl;
	}
    
    friend complex operator+(complex o1, complex o2);
}; 

complex operator+(complex o1, complex o2)
{
    complex temp;
    temp.real = o1.real + o2.real;
    temp.imag = o1.imag+ o2.imag;
    return temp;
}
int main()
{
    complex obj1(2, 3), obj2(4, 5), obj3;
    obj3 = obj1 + obj2;
    obj3.display();
    
    return 0;
}
