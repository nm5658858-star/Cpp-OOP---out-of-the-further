#include <iostream>
using namespace std;
class A{
	protected:
		int a;
	public:
		A(int x){
			a = x;
		}
		void display(){
			cout<<"A is: "<<a<<endl;
		}
};
class B{
	protected:
		int b;
	public:
		B(int y){
			b = y;
	}
		void print(){
			cout<<"B is: "<<b<<endl;
		}
};

class C:public A, public B {
	protected:
		int c;
	public:
		C(int p, int q, int r):	A(p), B(q)		//see something new file
		{
			c = r;
		}
		void show(){
			cout<<"C is: "<<c<<endl;
		}   
};

int main(){
//	C aa(10,20,30);
	int i,j,k;
	cout<<"Enter first number: ";
	cin>>i;
	cout<<"\nEnter second number: ";
	cin>>j;
	cout<<"\nEnter third number: ";
	cin>>k;
	C aa(i,j,k);
	aa.display();
	aa.print();
	aa.show();
	
	return 0;
}
