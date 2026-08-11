#include<iostream>
using namespace std;
int main()
{
	int a=1,b=2,l;
	cout<<a<<endl<<b;
	for(int i=3;i<=15;i++)
	{
		l = a+b;
		cout<<endl<<l;
		a = b;
		b=l;
	}
	cout<<endl;
	return 0;
 } 
 

 

