#include<iostream>
using namespace std;
class demo{
	int x,y;
	static int z;
	public:
		void input(int a, int b){
			x = a;
			y = b;
			z++;
		}
		void show(){
			cout<<"X is: "<<x<<endl;
			cout<<"Y is: "<<y<<endl;
			cout<<"Z is: "<<z<<endl;
		}
		static void abc(){
			cout<<"Z is: "<<z<<endl;
		}
		
};
int demo::z;

int main(){
	demo aa;
	aa.input(22,33);
	aa.show();
	demo::abc();
	
	
	return 0;
}
