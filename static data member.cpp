#include<iostream>
using namespace std;
class demo{
	int x,y;
	static int z;
	public:
		void inputdata(int a, int b){
			x = a;
			y = b;
			z+=1;
		}
		void show(){
			cout<<"X is: "<<x<<endl;;
			cout<<"Y is: "<<y<<endl;
			cout<<"Z is: "<<z<<endl;
		}
			
};
int demo::z;

int main(){
	demo aa,bb,cc;
	aa.inputdata(3,4);
	bb.inputdata(6,7);
	cc.inputdata(22,33);
	aa.show();
	cout<<endl;
	bb.show();
	cout<<endl;
	cc.show();
	
	return 0;
}
