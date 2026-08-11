#include<iostream>
using namespace std;
int main(){
     int a =100 , b = 200;
	 int *p = &a , *q = &b;                //p=a001    q=b001
	 cout<<a<<endl;     //100
	 cout<<b<<endl;     //200
	 cout<<p<<endl;     //a001
	 cout<<q<<endl;     //b001
	 cout<<&a<<endl;    //address 
	 cout<<&b<<endl;    //address
	 cout<<&p<<endl;    //f001
	 cout<<&q<<endl;    //f005
// 	   cout<<*a<<endl;  (error)
//     cout<<*b<<endl;  (error)
     cout<<*p<<endl;    //100
     cout<<*q<<endl;    //200
     cout<<"\n\n";
     
     p = q;             //p = b001
     cout<<a<<endl;     //100
     cout<<b<<endl;     //200
     cout<<p<<endl;     //b001
     cout<<q<<endl;     //b001
//     cout<<*a<<endl;  (error)
//     cout<<*b<<endl;  (error)
     cout<<*p<<endl;    //200
     cout<<*q<<endl;    //200
     cout<<&a<<endl;    //a001
     cout<<&b<<endl;    //b001
     cout<<&p<<endl;    //f001
     cout<<&q<<endl;    //f005
     cout<<"\n\n";
     
     *p = 300;
     cout<<a<<endl;     //100
     cout<<b<<endl;     //300
     cout<<p<<endl;     //a001
     cout<<q<<endl;     //b001
//     cout<<*a<<endl;  (error)
//     cout<<*b<<endl;  (error)
     cout<<*p<<endl;    //300
     cout<<*q<<endl;    //300
     cout<<&a<<endl;    //a001
     cout<<&b<<endl;    //b001
     cout<<&p<<endl;    //f001
     cout<<&b<<endl;    //f005
     cout<<"\n\n";
    
     int aa = 3;
     int* bb;
     bb = &aa;
     cout<<"The address of a is:"<<aa<<endl;
     cout<<"The address of a is:"<<bb<<endl;
     cout<<"The value at address b is:"<<*bb<<endl;
     int** c = &bb;
	 cout<<"The address of b is:"<<&bb<<endl;
	 cout<<"The address of b is:"<<c<<endl;
	 cout<<"The value at address c is:"<<*c<<endl;
	 cout<<"The value at address value(value_at(c)) is:"<<*c<<endl;

	return 0;
}
