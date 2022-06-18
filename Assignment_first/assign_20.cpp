/*Program 20: Write a program to overload multiplication operator(*) showing
the multiplication of two objects.*/

#include <iostream>
using namespace std;

class multi
{
    int x;
    int y;

public:
    multi()
    {
        x = 5;
    }
    void operator*(multi o2)
    {
    	
        x *= o2.x;
        cout << "Multipication of two object is : " << endl;
        cout << "x = " << x << endl;
    }
};
int main()
{
    multi m1, m2;
    m1 * m2;
    
    return 0;
}
