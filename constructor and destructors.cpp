#include<iostream>
using namespace std;

class home{
	private: 
		int a,b;
	public:
		
		home() {                   //default contructor
			a = 24;
		}                           
	home(int m, int n){           //parameterized contructor...if from user, m is getting x and n is getting y
		a = m;
		b = n;
	}                              
	home( home &w){              //copy constructor
		a = w.a;
	}                            
		int show(){
			cout<<"A is: "<<a<<endl;
			cout<<"B is: "<<b<<endl;
		}
		void sum(){
			cout<<"Sum of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
		}
};

int main(){
	
	int x,y;
	cout<<"Enter number one: ";
	cin>>x;
	cout<<"Enter number two: ";
	cin>>y;
	 home hh(x,y);
//	home hh;
	hh.show();
	hh.sum();

//	home ii(hh);
//	ii.show();
	return 0;
}

