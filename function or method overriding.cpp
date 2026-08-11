#include <iostream>
using namespace std;
class A{
	public:
		void display(){
			cout<<"Base class: "<<endl;
		}
};

class B:public A{
	public:
		void display(){
			cout<<"Derived class: "<<endl;
			A:: display();  // if we want to call the base class method (i.e. Base class: )...1st method
	}
};



int main(){
//	void display(){
//		cout<<"Here\n";
//	}
B aa;
aa.display(); // when an object is made of derived class, firstly it checks that whether the called function is inside me or not...
//	after that it will check other classes, here, (in upper line) B's display is called
aa.A::display();        // if we want to call the base class method (i.e. Base class: )...2nd method
	
	return 0;
}
