/*Program 22: Write a program to find the sum and difference of any two
complex numbers by overloading ‘+’ and ‘-‘ operator.*/

#include <iostream>
using namespace std;
class complex
{
    int x;
    int y;

public:
	complex(){
	}
    complex(int real, int imag)
    {
        x = real;
        y = imag;
    }
    void operator+(complex o2)
    {
        x += o2.x;
        y += o2.y;
        cout << "sum of two complex number :" << endl;
        if(y > 0){
			cout << x << " + "<<  y << " i "<< endl;
		}
		if(y < 0){
			cout << x <<  y << " i "<< endl;
		}
		
        
    }
    void operator-(complex o2)
    {
        x -= o2.x;
        y -= o2.y;
        cout << "Difference of two complex number :" << endl;
        if(y > 0){
			cout << x << " + "<<  y << " i "<< endl;
		}
		if(y < 0){
			cout << x <<  y << " i "<< endl;
		}
    }
};
int main()
{
    complex m1(3,2), m2(3,5);
    m1 + m2;
    m1 - m2;
    return 0;
}
