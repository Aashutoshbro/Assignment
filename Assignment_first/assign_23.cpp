/*Program 23: Design a Soccer player class that includes three integer fields: a
player’s jersey number, number of goals, number of assists and necessary
constructors to initialize the data members. Overload the > Operator (greater
than). One player is considered greater than another if the sum of goals plus
assists is greater than of the others. Create an array of 11 soccer players, then
use the overloaded > operator to find the player who has the greatest total of
goals plus assists.*/

#include <iostream>
using namespace std;
	int n =3;
class Soccer
{
    int jersey_num;
    int goals;
    int assists;

public:
    Soccer()
    {
    }
    
    void get_data()
    {
    	cout<<"Enter the following info : "<<endl<<endl;
        cout<<"Jersey Number"<<endl;
        cin>>jersey_num;
        cout<<"Goals"<<endl;
        cin>>goals;
        cout<<"Assists"<<endl;
        cin>>assists;
    }
    Soccer operator>(Soccer a[])
    {
        Soccer temp;
        for (int i = 1; i < n; i++)
        {
            if ((goals + assists) < (a[i].goals + a[i].assists))
            {
                temp = *this;
                *this = a[i];
                a[i] = temp;
            }
        }
        return *this;
    }
    void display()
    {
        cout << "Greateast player with high goals and assits is :"<<endl;
        cout << "Jersey Number : " << endl;
        cout << jersey_num << endl;
        cout << "Goals : " << endl;
        cout << goals << endl;
        cout << "Assists : " << endl;
        cout << assists << endl;
    }
};
int main()
{

    Soccer a[n], b;
    for (int i = 0; i < n; i++)
    {
        a[i].get_data();
    }
    int i = 0;
    b = a[0] > a;
    b.display();
    return 0;
}
