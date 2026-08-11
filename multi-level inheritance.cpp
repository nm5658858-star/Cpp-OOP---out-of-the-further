#include<iostream>
using namespace std;
class A{
	private:
		int roll;
	public:
		void inputroll(){
			cout<<"Enter roll: ";
			cin>>roll;
		}
		void getroll(){
			cout<<"\nRoll is: "<<roll<<endl;
		}
};

class B: public A{
	protected:
		int sub1,sub2;
	public:
		void inputmarks(){
			cout<<"Enter marks of subject one: ";
			cin>>sub1;
			cout<<"Enter marks of subject two: ";
			cin>>sub2;
		}
		void displaymarks(){
			cout<<"Marks of subject 1 are: "<<sub1<<endl;
			cout<<"Marks of subject 2 are: "<<sub2<<endl;
		}
		
}; 

class C:public B{
	private:
		int sportmarks;
	public:
		void inputspm(){
			cout<<"Enter sports marks: ";
			cin>>sportmarks;
		}
		void displayspm(){
			cout<<"Sports marks are: "<<sportmarks<<endl;
		}
		void show(){
			inputroll();
			inputmarks();
			inputspm();
			getroll();
			displaymarks();
			displayspm();
			}
			void total(){	
			cout<<"\nTotal marks are: "<<sub1+sub2+sportmarks<<endl;
		}
};
int main(){
	C aa;
	aa.show();
	aa.total();
	
	return 0;
}
