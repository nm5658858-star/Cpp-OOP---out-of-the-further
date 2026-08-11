#include <iostream>
using namespace std;
class A{
	int x;
	public:
		A():x(10){
			cout<<"Default constructor called\n";
		}
		A(int i):x(i){
			cout<<"Parameterized constructor called\n";

		}
		void setx(int i){
			x = i;
		}
		int getx(){
			return x;
		}
		
};

class B{
	A obja;
	int y;
	public:
		B():y(20){
			cout<<"Default constructor called\n";
		}
		B(int i, int j):obja(i),y(j){
			cout<<"Parameterized constructor called\n";

		}
		void display(){
			int inputX;
			cout<<"Enter value of X: ";
			cin>>inputX;
			obja.setx(inputX);
			cout<<"Enter value of Y: ";
			cin>>y;
			cout<<"Obj x: "<<obja.getx()<<endl;
			cout<<"Y= "<<y<<endl;
		}
};
int main(){
	B objb;
	objb.display();
	B obj2(40,60);
	obj2.display();
	B obj3;
	obj3.display();
}
