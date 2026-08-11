#include<iostream>
using namespace std;

class A{
	public:
		virtual void show(){
			cout<<"Base class"<<endl;
		}
};
class B:public A{
	public:
	    void show(){
			cout<<"Derived class"<<endl;
		}
};
int main(){
//	cout<<"Pointer of A and object of A displays:\n";
//	A* aptr;
//	A aa;
//	aptr = &aa;
//	aptr->show();
	
//	cout<<"Pointer of B and object of B displays:\n";
//	B* bptr;
//	B bb;
//	bptr = &bb;
//	bptr->show();
	
//	cout<<"Pointer of A and object of B displays:\n";
//	A* aaptr;
//	B bb;
//	aaptr = &bb;
//	aaptr->show();
	
//	cout<<"Pointer of B and object of A displays ERROR\n";
////	B* aptr;
////	A aa;
////	aptr = &aa;
////	aptr->show();
	
	
	
////virtual to be used with Base class

	A* bptr;
	B bbb;
	bptr = &bbb;
	bptr->show();
	return 0;
}

