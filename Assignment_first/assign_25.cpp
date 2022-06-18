/*Program 25: Write a program to add two Times expressed in hours, minutes
and seconds using operator overloading. */

#include <iostream>
using namespace std;

class Time
{
int hour, minute, second;
public:
	
	Time(){
	}
	Time(int h, int m , int s)
	{
		hour = h;
		minute = m;
		second = s;
	}
    friend void operator+(Time o1, Time o2);
};
void operator+(Time o1, Time o2)
{
    o1.hour = o1.hour + o2.hour;
    o1.minute = o1.minute + o2.minute;
	o1.second = o1.second + o2.second;
	if(o1.minute > 59 ){
			int b= o1.minute;
			b =o1.minute / 60;
			o1.hour=o1.hour+b;
			o1.minute=o1.minute % 60;
			
		}
	if(o1.second > 59 ){
			int a= o1.second;
			a =o1.second / 60;
			o1.minute=o1.minute+a;
			o1.second=o1.second % 60;

		}
		
    cout << "Sum is :  " << endl;
    cout << o1.hour << " : " << o1.minute << " : " << o1.second << endl;
}
int main()
{
    Time t1(0,10,60);
	Time t2(0,50,120);
	t1+t2;
    
    return 0;
}
