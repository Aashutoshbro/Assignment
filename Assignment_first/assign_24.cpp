/*Program 24: Write a program to overload ‘+’ operator to concatenate two
strings*/

#include<iostream>
#include<string.h>
using namespace std;

class String
{
        public:
                char name[20];
        public:
                void get_string()
                {
                        cout<<"Enter String : ";
                        cin>>name;
                }
                void display_string()
                {
                        cout<<name;
                }
                
                String operator+(String x)
                {
                        String s;
                        strcat(name,x.name);
                        strcpy(s.name,name);
                        return s;
                }
};
int main()
{
        String str1, str2, str3;

        str1.get_string();
        str2.get_string();

        cout<<"First String  is :  ";
        str1.display_string();
		cout<<endl;	
        cout<<"Second String is :  ";
        str2.display_string();
        cout<<endl;
        
        str3=str1+str2; 
		cout<<"Added Strings is :  "<<endl;
        str3.display_string();

        return 0;
}
