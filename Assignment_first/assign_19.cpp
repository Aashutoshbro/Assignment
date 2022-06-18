/*Program 19: Write a program to find the area of a triangle (when its sides are
given) using the concept of overloaded constructor*/

#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
    float S;
    float A;
    int a;
    int b;
    int c;

public:
    Triangle()
    {
        a = 20;
        b = 10;
        c = 20;
    }
    Triangle(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void area()
    {
        S = (a + b + c) / 2;
        A = sqrt(S * (S - a) * (S - b) * (S - c));
        cout << " Area of the given sides triangle is : " << A << endl;
        }
};


int main()
{
    Triangle t1;
    Triangle t2(6, 7, 8);
    t1.area();
    t2.area();
    
    return 0;
}
