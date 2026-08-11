#include<iostream>
using namespace std;

class A{
	protected:
	public:
		void putdata(){
			cout<<"Inside class A: "<<endl;
		}
	
};

class B:public A{
	protected:
		
	public:
		void display(){
			cout<<"Inside class B: "<<endl;
		}
};

class C{
	public:
		void message(){
			
		cout<<"Inside class C: "<<endl;
		}
};

class D: public B, public C{
	public:
		void print(){
			
		cout<<"Inside class D: "<<endl;
		}
};

int main(){
	D dd;
	dd.putdata();
	dd.display();
	dd.message();
	dd.print();
	
	return 0;
}
