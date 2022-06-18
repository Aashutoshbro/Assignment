/*Program 14: Write a program to enter the information of n students and then
display it using the concept of multilevel inheritance.*/

#include <iostream>
using namespace std;
class student_data
{
public:
    string name;
    int clas;
    int roll_num;
    student_data(){};
};
class student_get_data : public student_data
{
public:
    void input()
    {
        cout << "Enter the info of students : " << endl;
        cout << "Name : " <<endl;
        cin >> name;
        cout << "Class : " <<endl;
        cin >> clas;
        cout << "Roll No : " <<endl;
        cin >> roll_num;
    }
};
class data_display : public student_get_data
{
public:
    void display()
    {
    	
        cout << "Details of the student" << endl;
        cout <<"............................."<<endl;
		cout << "Name :" << name << endl;
        cout << "Class :" << clas << endl;
        cout << "Roll No :"<< roll_num << endl;
		cout <<"............................."<<endl;
    }
    
    
};
int main()
{

    int num,i;
    cout << "Enter the numbers of students:" << endl;
    cin >> num;
    data_display o1[num];
    for (i = 0; i < num; i++)
    {
        o1[i].input();
    }
    for (i = 0; i < num; i++)
    {
        o1[i].display();
    }

    return 0;
}
