#### Program 4: Write a program according to the specification given below: Create a class Teacher with data members, tid & subject and member functions for reading and displaying data members.Create another class Staff with data members, sid & position, and member functions for reading and displaying for data members. Derive a class Coordinator from the Teacher and Staff and the class must have its own data member department and member functions for reading and displaying Create two objects of the Coordinator class and read and display their details.
```
#include <bits/stdc++.h>
using namespace std;

class Teacher{
	int tid;
	string subject;
	public:
		void get_Data_teacher(){
			cout<<"Enter Teacher Id:"<<endl;
			cin>>tid;
			cout<<"Enter Your Subject:"<<endl;
			cin>>subject;
		}
		
		void display_teacher(){
			cout<<".......Teachers Data........."<<endl;
			cout<<"Teacher Id: "<<tid<<endl;
			cout<<"Subject is: "<<subject<<endl;
		}
};

class Staff{
	int sid;
	string position;
	public:
		void get_Data_staff(){
			cout<<"Enter Staff Id:"<<endl;
			cin>>sid;
			cout<<"Enter Your Position:"<<endl;
			cin>>position;
		}
		
		void display_staff(){
			cout<<"......Staff's Data........"<<endl;
			cout<<"Staff Id is: "<<sid<<endl;
			cout<<"Position is: "<<position<<endl;
		}
};

class Coordinator:public Teacher,public Staff{
	string department;
	public:
		void get_Data_coordinator(){
			cout<<"Enter Department: "<<endl;
			cin>>department;
			Teacher::get_Data_teacher();
			Staff::get_Data_staff();
		}
		
		void display_coordinator(){
			cout<<".........................."<<endl;
			cout<<"Department is: "<<department<<endl;
			Teacher::display_teacher();
			Staff::display_staff();
			cout<<".........................."<<endl;
		}
};



int main(){
	Coordinator c1 ,c2;
	c1.get_Data_coordinator();
	c2.get_Data_coordinator();
	c1.display_coordinator();
	c2.display_coordinator();


return 0;
}

```



![Screenshot (990)](https://user-images.githubusercontent.com/55585284/174446684-052de7cc-54d3-41bf-87af-7dff03c1dae2.png)

