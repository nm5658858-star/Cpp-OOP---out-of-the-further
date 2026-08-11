#include<iostream>
using namespace std;
class A{
	protected:
		
	public:
		void message(){
			cout<<"Welcome to Inheritance!"<<endl;
		}
};

class B: public A{
	protected:
		
	public:
		void display(){
		cout<<"Inside class B: "<<endl;
		}
};

class C: public A{
	protected:
		
	public:
		void show(){
			cout<<"Inside class C: "<<endl;
		}
};

int main(){
	B aa; 
	aa.display();
	aa.message();
	C bb;
	bb.show();
	bb.message(); 
	
	return 0;
}
