### Program 3: Using a class write a program that receives inputs, principle amount, time and rate. Keeping rate 8% as the default argument, 
calculate the simple interest for three customers.
```
#include <bits/stdc++.h>
using namespace std;
class customer{
	float principle;
	int time;
	int rate;
	
	public:
		void get_Data(){
			cout<<"Enter Principle amount: "<<endl;
			cin>>principle;
			cout<<"Enter Time period: "<<endl;
			cin>>time;
			cout<<"We have rate 0f 8% for all customers:"<<endl;
		}
		
		void display(int r=8){
			rate=r;
			float Interest;
			Interest = (principle*time*rate)/100;
			cout<<"The Simple interest of our kind customer is: "<<Interest<<endl<<endl;
			
		}
};


int main(){
	
	customer a, b, c;
	cout<<"..............Enter the following..................."<<endl<<endl;
	a.get_Data();
	a.display();
	b.get_Data();
	b.display();
	c.get_Data();
	c.display();
	
	return 0;

}
```
![Screenshot (989)](https://user-images.githubusercontent.com/55585284/174446242-ffb55f66-d927-4955-8102-3d51192503b0.png)
