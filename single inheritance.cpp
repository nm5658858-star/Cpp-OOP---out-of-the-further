#include<iostream>
using namespace std;
class A{
	protected:
		int a;
	public:
		void input(){
			cout<<"Enter num:";
			cin>>a;
		}
		void display(){
			cout<<"A is: "<<a<<endl;
		}
};

class B:public A{
	protected:
		int b;
	public:
		void getdata(){
			cout<<"Enter num: ";
			cin>>b;
		}
		void display2(){
			cout<<"B is: "<<b<<endl;
		}
		void add(){
			cout<<"\nAddition is: "<<a+b<<endl;
		}
		void total(){
			input();
			display();
			getdata();
			display2();
			add();
		}
};

int main(){
	B aa;
	aa.total();

	return 0;
}



