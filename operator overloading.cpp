#include<iostream>
using namespace std;
class demo{
	private:
		float a;
	public:
		void input(){
			cout<<"Enter a number: ";
			cin>>a;
		}
		void show(){
			cout<<"Number is: "<<a<<endl;
		}
		demo operator+ (demo& bb){
			demo cc;
			cc.a = this->a + bb.a;
			return cc;
		}
		demo operator- (demo& bb){
			demo sub;
			sub.a = a - bb.a;
			return sub;
		}
		demo operator* (demo& bb){
			demo pro;
			pro.a = a * bb.a;
			return pro;
		}
		demo operator/ (demo& bb){
			demo div;
			div.a = a / bb.a;
			return div;
		}
};

int main(){
	demo aa,bb,cc;//	aa	bb	cc
	aa.input();//		10
	bb.input();//		5
	cc = aa + bb;//		10+5 =   15 
	aa.show();//		10
	bb.show();//		5
	cc.show();//		15
	
	cout<<"For subtracting:\n";
	aa.input();
	bb.input();
	cc = aa - bb;
	aa.show();
	bb.show();
	cc.show();
	
	cout<<"For Product:\n";
	aa.input();
	bb.input();
	cc = aa * bb;
	aa.show();
	bb.show();
	cc.show();
															
	cout<<"For Division\n";
	aa.input();
	bb.input();
	cc = aa / bb;
	aa.show();
	bb.show();
	cc.show();
	
}
