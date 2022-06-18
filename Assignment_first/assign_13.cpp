/*Program 13: Write a program to add two complex numbers using the concept
of constructor. */

#include <iostream>
using namespace std;
class complex
{
    int real;
    int image;

public:
	complex(){
	}
    complex(int r, int i)
    {
        real = r;
        image = i;
    }
    void sum(complex o1, complex o2)
    {
        cout <<"Added complex number is : "<<o1.real + o2.real<<" + "<<o1.image + o2.image<<" i"<<endl;
    }
};
int main()
{
    complex obj1(2,5), obj2(5, 6), obj3;
    obj3.sum(obj1, obj2);
    return 0;
}
