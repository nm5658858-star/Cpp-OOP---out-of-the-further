#include<iostream>
using namespace std;
class demo{
	private:
		int a;
//		int b;
	public:
		demo(){
			a = 10;
//			b = 99;
		}
		demo(int x,int y){
			a = x;
//			b = y;
		}
		demo( demo& z){
			a = z.a;
		}
//		demo( demo& l){
//			b = l.b;
//		}
		void show(){
			cout<<"A is: "<<a<<endl;
//			cout<<"B is: "<<b<<endl;
		}
};

int main(){
	demo aa;          //default constructor
	aa.show();
	
	demo bb(20,30);      //parameterized contructor
	bb.show();
	
	demo cc(bb);      //copy constructor
	cc.show();
	
//	demo dd(bb);
//	dd.show(); 
	return 0;
}



