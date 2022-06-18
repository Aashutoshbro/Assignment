/*Program 16: Write a program to swap variables of two classes using friend
function.*/

#include<iostream>
using namespace std;

class B;
class A
{
    int num1;
    public:
        A()
        {
        num1=2;
        }
        void show()
        {
        cout<<"\n Value of Number 1 : "<<num1;
        }
        friend void swap(A *num1, B *num2);
};
class B
{
    int num2;
    public:
        B()
        {
         num2=4;
        }
        void show()
        {
        cout<<"\n Value of Number 2 : "<<num2;
        }
        friend void swap(A *num1, B *num2);
};
void swap(A *no1, B *no2)
{
        int no3;
        no3=no1->num1;
        no1->num1=no2->num2;
        no2->num2=no3;
}
int main()
{
        A b;
        B d;
        b.show();
        d.show();
        swap(&b, &d);
        b.show();
        d.show();
        
        return 0;
}
