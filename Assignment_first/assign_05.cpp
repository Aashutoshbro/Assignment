/*Program 5: Create a class called Mountain with data members name, height, location, a constructor initializes the members to the values passed to it as
parameters, a function called CmpHeight( ) to compare two objects and DisplayInf( ) to display the information of Mountain. In main, create two objects
of the class mountain and print the information of the mountain which is of greatest height.
*/

#include<iostream>
using namespace std;

class Mountain{
	string name;
	float height;
	string location;
	public:
		Mountain(){
			
		}
		Mountain(string n, float h, string l){
			name=n;
			height=h;
			location=l;			
		}
		
		void DisplayInf(Mountain p1){
			cout<<"Name     : "<<p1.name<<endl;
			cout<<"Height   : "<<p1.height<<endl;
			cout<<"Location : "<<p1.location<<endl;
			
		}

		void CmpHeight(Mountain o1,Mountain o2){
			cout<<"............Mountain Height to be compare................."<<endl;
			DisplayInf(o1);
			cout<<".........................................................."<<endl;
			DisplayInf(o2);
			cout<<".........................................................."<<endl;
			
			if(o1.height > o2.height){
				cout<<"Mountain with greatest Height is: "<<endl;
				return DisplayInf(o1);
			}else{
				cout<<"Mountain with greatest Height is: "<<endl;
				return DisplayInf(o2);
			}			
		}
};
	

int main(){
	Mountain m1("Sagarmatha", 8840 ,"Solu");
	Mountain m2("Api", 8000 ,"najikaiho");
	Mountain m3;
	m3.CmpHeight(m1,m2);
	

return 0;
}

