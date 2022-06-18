/*Program 15: Create classes called class1 and class2 with each having one
private member. Add member function to set a value (say setvalue) on each
class. Add one more function max( ) that is friendly to both classes. max( )
function shound compare two private member of two classes and show
maximum among them. Create one-one object of each class then set a value on
them. Display the maximum number among them.
*/

#include <iostream>
using namespace std;

class class2;
class class1
{
    int first_num;

public:
    void setvalue()
    {
        cout << "setvalue for first : " << endl;
        cin >> first_num;
    }
    friend int max(class1 obj1, class2 obj2);
};

class class2
{
    int second_num;

public:
    void setvalue()
    {
        cout << "setvalue for second : " << endl;
        cin >> second_num;
    }
    friend int max(class1 obj1, class2 obj2);
};
int max(class1 obj1, class2 obj2)
{
    int a;
    if (obj1.first_num > obj2.second_num)
    {
        a = obj1.first_num;
    }
    else
    {
        a = obj2.second_num;
    }
    return a;
}
int main()
{
    class1 a;
    class2 b;
    a.setvalue();
    b.setvalue();
    int x = max(a, b);
    cout << x << " is the greatest number. " << endl;
    
    return 0;
}
