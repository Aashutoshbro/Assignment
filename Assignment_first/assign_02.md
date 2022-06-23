### Program 2: Design a class to represent a bank account with data members name, account-number, account-type, and balance. Define functions to assign initial values, to deposit an amount, to withdraw an amount after checking balance, and to display the name and balance. 
```

#include <bits/stdc++.h>
using namespace std;

class Bank
{

public:
char name[20];
char account_type[20];
char account_number[20];
int balance;

void get_Data()
{
cout<<"Enter Account Holder's  Name:";
cin>>name;
cout<<"Enter Account type:";
cin>>account_type;
cout<<"Enter account number:";
cin>>account_number;
cout<<"Enter balance to deposit:";
cin>>balance;
}

void deposit()
{
int bal;
cout<<"\nEnter the amount to deposit:";
cin>>bal;
balance=balance+bal;
cout<<"\nAmount deposited successfuly\nYour New Balance:"<<balance;
}


void check()
{
int bal;
cout<<"\nYour balance :"<<balance<<"\nEnter amount to withdraw:";
cin>>bal;
if(bal<=balance)
{
balance=balance-bal;
cout<<"\nRemaining Balance:"<<balance;
}
else
{
cout<<"\nSorry you don't have enough balance";
}
}

void display()
{
cout<<"\nName :";
cout<<name<<endl;
cout<<"\nBalance :"<<balance;
}
};

int main()
{

int i;

Bank obj;
obj.get_Data();
cout<<"\n1. Your Information\n2. Deposit\n3. Withdraw\nEnter your choice\n"<<endl;
cin>>i;
if(i==1)
{
obj.display();
}
else if(i==2)
{
obj.deposit();
}
else if(i==3)
{
obj.check();
}
return 0;
}

```



![Screenshot (987)](https://user-images.githubusercontent.com/55585284/174445972-1c15a915-520d-421e-9d17-47e9b282d1db.png)
![Screenshot (988)](https://user-images.githubusercontent.com/55585284/174445978-3c0325b3-b293-41d3-be9e-6446c52e5aee.png)
![Screenshot (986)](https://user-images.githubusercontent.com/55585284/174445992-937cac80-37a5-4d8d-916a-15b5e8c3be62.png)
