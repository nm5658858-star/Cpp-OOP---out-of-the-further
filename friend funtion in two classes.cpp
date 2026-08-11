#include<iostream>
using namespace std;
class B;			// it means class has been defined below somewhere...
class A{
	int a;
	public:
		void input(){
			cout<<"Enter a number: ";
			cin>>a;
		}
		friend void max(A,B);
};
class B{
	int b;
	public:
		void get(){
			cout<<"Enter another number: ";
			cin>>b;
		}
		friend void max(A,B);
}; 
void max(A obj1, B obj2){
	if(obj1.a > obj2.b)
		cout<<"Max is obj1: "<<obj1.a;        // .a means the data member of class A i.e. of obj1
	else
		cout<<"Max is obj2: "<<obj2.b;	     // .b means the data member of class B i.e. of obj2
}
//int max(A obj1, B obj2){
//	return (obj1.a + obj2.b);
//}


int main(){
	A obj1; B obj2;
	obj1.input();
	obj2.get();
	max(obj1,obj2);
//	cout<<"Sum is: "<<max(A obj1, B obj2);
	
	return 0;
}
