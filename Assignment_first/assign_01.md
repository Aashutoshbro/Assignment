### Program 1: Write a program to find the cube of given integer using inline function.
```
#include <bits/stdc++.h>
using namespace std;

inline int cube(int x){
	return (x*x*x);
}

int main(){
	int num;
	cout<<"Enter any number"<<endl;
	cin>>num;
	cout<<"The cube of the given number is: "<<cube(num)<<endl;

	return 0;
}
```
![Screenshot (985)](https://user-images.githubusercontent.com/55585284/174445741-a3521eab-2967-43fb-8b33-35cd04d28e00.png)
