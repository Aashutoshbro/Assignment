/*Program 8: Write a program to create a class called Room in which data items
are length, breadth and height. Create an array of objects in the room. And
finds its area and volume. */

#include<iostream>
using namespace std;

class Room{
	int length,breadth,height;
	public:
		void get_data(){
			cout<<"Enter length, breadth, height "<<endl;
			cin>>length;
			cin>>breadth;
			cin>>height;
		}
		void area(){
			float A=2*(length*breadth+breadth*height+length*height);
			cout<<"Area is: "<<A<<endl;
		}
		void volume(){
			float V= length*breadth*height;
			cout<<"Volume is: "<<V<<endl;
		}
		void display(){
			get_data();
			area();
			volume();
		}
};


int main(){
	int n,i;
	cout<<"Enter how many Room objects do you want to add: "<<endl;
	cin>>n;
	Room r1[n];
	for(i=0;i<=n-1;i++){
		r1[i].display();
	}
//	r1[0].display();
//	r1[1].display();

	
	

return 0;
}

