/*Program 12: Write base class that asks the user to enter Time (hour, minute
and second) and derived class adds the Time of its own with the base. Finally,
make third class that is friend of derived and calculate the difference of base
class time and its own time.*/

#include <iostream>
using namespace std;
class time
{
public:
    int h1,m1,s1;
    void get_data(int a , int b, int c)
    {
    	h1=a;
    	m1=b;
    	s1=c;
    }
};
class last : public time
{
public:
	int h2,m2,s2;
	
    void get_data_last(int a , int b, int c)
    {
    	h2=a;
    	m2=b;
    	s2=c;
    }
    last add(time o2)
    {
	last temp;

		temp.hour = h2+ o2.h1;
		temp.minute = m2+ o2.m1;
		temp.second = s2+ o2.s1;
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
    void display()
    {
        cout << "Total time:" << endl;
        cout << "Hrs: " << hr << " Min: " << min << " Sec:" << sec << endl;
    }
    friend class third;
};
class third
{
    int hour,minute,second;

public:
    void enter()
    {
        cout << "Enter Hour, Minute and Second" << endl;
        cin >> hour;
        cin >> minute;
        cin >> second;
    }
    third diff(time o2)
    {
        hour -= o2.hr;
        minute -= o2.min;
        second -= o2.sec;
        if (hour < 0)
        {
            hour = -hour;
        }
        if (minute < 0)
        {
            minute = -minute;
        }
        if (second < 0)
        {
            second = -second;
        }
        return *this;
    }
    void display()
    {
        cout << "Total Difference" << endl;
        cout << "Hrs: " << hour << " Min: " << minute << " Sec:" << second << endl;
    }
};
int main()
{
    time o1;
    o1.get_data();
    last a, b;
    a.get_data();
    b = a.add(o1);
    b.display();
    third obj, obj_add;
    obj.enter();
    obj_add = obj.diff(o1);
    obj_add.display();
    return 0;
}
