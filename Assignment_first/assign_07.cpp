/*Program 7: Create a class called Employee with data member Code, Name,
Address and Salary. Create a constructor to initialize the member of the class.
Also create another constructor so that we can create an object from another
object. Define member function display( ) to display the information of the
class.*/

#include<iostream>
using namespace std;

class Employee{
	int Code;
	string Name;
	string Address;
	float Salary;
	public:
		Employee(int c, string n,string a, float s){
			Code = c;
			Name = n;
			Address = a;
			Salary = s;
		}
		Employee(Employee &obj){
			Code=obj.Code;
			Name=obj.Name;
			Address=obj.Address;
			Salary=obj.Salary;
		}
		void display(){
			cout<<"........................."<<endl;
			cout<<"Information of the class:"<<endl;
			cout<<"Code    :"<<Code<<endl;
			cout<<"Name    :"<<Name<<endl;
			cout<<"Address :"<<Address<<endl;
			cout<<"Salary  :"<<Salary<<endl;
			cout<<"........................."<<endl;
		}
};


int main(){
	Employee o1(202,"aashu","bharatpur",24000);
	Employee o2 (o1);
	
	o1.display();
	o2.display();

return 0;
}

