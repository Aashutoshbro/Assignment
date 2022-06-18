/*Program 10:
Write a C++ program to represent the above inheritance scheme. Also write a
main() function to test the classes, Manager and Computer Operator, by
creating their objects, taking input and displaying the corresponding values*/

#include <iostream>

using namespace std;
class Employee
{
    string Name;
    int Id;

public:
    void getdata()
    {
        cout<<"Enter your name :"<< endl;
        cin>>Name;
        cout<<"Enter your id :"<<endl;
        cin>>Id;
    }
    void putdata()
    {
        cout<<"Employeee name :"<<Name<<endl;
        cout<<"Employerr id :"<<Id<<endl;
    }
};
class Manager : public Employee
{
    string Department;

public:
    void getdata()
    {
        Employee::getdata();
        cout<<"Enter your department :";
        cin>>Department;
    }
    void putdata()
    {
    	cout<<"..................................."<<endl;
        Employee::putdata();
        cout<<"Manager department :"<<Department<<endl;
   		cout<<"..................................."<<endl;
    }
    
};
class ComputerOperator : public Employee
{
    string Typing_Speed;

public:
    void getdata()
    {
        Employee::getdata();
        cout<<"Enter your typing speed :"<<endl;
        cin>>Typing_Speed;
    }
    void putdata()
    {
    	cout<<"..................................."<<endl;
        Employee::putdata();
        cout<<" Typing speed is :"<<Typing_Speed<<endl;
        cout<<"..................................."<<endl;
    }
};
int main()
{
    Manager a;
    ComputerOperator b;
	a.getdata();
    a.putdata();    
    b.getdata();
    b.putdata();
    return 0;
}
