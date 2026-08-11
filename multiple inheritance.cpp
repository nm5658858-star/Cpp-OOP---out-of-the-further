#include<iostream>
using namespace std;
class A{
	protected:
		int a;
	public:
		void input(){
			cout<<"Enter number 1: ";
			cin>>a;
		}
		void display(){
			cout<<"A is: "<<a<<endl;
		}
};

class B{ 
	protected:
		int b;
	public:
		void input2(){
			cout<<"Enter number 2: ";
			cin>>b;
		}
		void display(){
			cout<<"B is: "<<b<<endl;
		}
};

class C:public A,public B{
	protected:
		
	public:
		void add(){
			cout<<"\nAddition is: "<<a+b<<endl;
		}
};


int main(){
	C aa;
	aa.input();
//	aa.display();
	aa.input2();
//	aa.display();
	aa.add();
	
	
	
	return 0;
}
