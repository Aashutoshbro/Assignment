/*Program 9: Create a class Account with data members acc no, balance, and
min_balance(static).
? Include methods for reading and displaying values of objects
? Define static member function to display min_balance
? Create array of objects to store data of 5 accounts and read and display
values of each object.*/

#include <iostream>
using namespace std;
class Account {
	string acc_no;
	float balance;
	static float min_balance;
	public:
		void read(){
		    cout<<"Enter the following data:"<<endl;
		    cout <<"Acc_no : "<<endl;
			cin>>acc_no;
		    cout <<"Balance : "<<endl;
			cin>>balance;
		    cout <<"Min_Balance : "<<endl;
			cin>>min_balance;
		}
		void display(){
			cout <<".........................."<<endl;
		    cout <<"Data of Account's holder :"<<endl;
		    cout <<"Account No. : "<<acc_no<<endl;
		    cout <<"Balance     : "<<balance<<endl;
			cout <<".........................."<<endl;
		}
		static void display_minimum(){
		    cout<<"Min_balance "<<min_balance<<endl;
		}
};
float Account::min_balance =0;
int main(){
	int i;
    Account A[5];
    for(i=0;i<5;i++){
      A[i].read();
      A[i].display();
      Account::display_minimum();
    }
    return 0;
}
