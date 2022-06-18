/*Program 11: Create a class time having hour, minute and second as data
members. The constructor is used to initialize these members. Define a
function add that takes two class objects as arguments and add them
respectively then display the aggregate result.*/


#include<iostream>
using namespace std;

class Time {
	public:
		int hour, minute, second;
	Time(){
	}
	Time(int h, int m , int s)
	{
		hour = h;
		minute = m;
		second = s;
	}
	Time add_time(Time o1, Time o2)
	{
		Time temp;

		temp.hour = o1.hour+ o2.hour;
		temp.minute = o1.minute+ o2.minute;
		temp.second = o1.second+ o2.second;
		if(temp.minute > 59 ){
			int b= temp.minute;
			b =temp.minute / 60;
			temp.hour=temp.hour+b;
			temp.minute=temp.minute % 60;
			
		}
		if(temp.second > 59 ){
			int a= temp.second;
			a =temp.second / 60;
			temp.minute=temp.minute+a;
			temp.second=temp.second % 60;

		}
		
		return temp;
	}
};

int main()
{

	Time t1(0,10,60);
	Time t2(0,50,120);
	Time t3;
	t3 = t3.add_time(t1, t2);
	cout<<"H:"<<"M:"<<"S"<<endl;
	cout<<t3.hour<<":"<<t3.minute<<":"<<t3.second<<endl;
	return 0;
}

