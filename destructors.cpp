#include<iostream>
using namespace std;
int count = 0;
class demo{
	int a,b;
	public:
		demo(){
			++count;
			cout<<"No of object created:"<<count<<endl;
		}
		demo(int x){
			b = x;
		}
		dem(demo &z){
			a = z.a;
		}
//		~demo(){
//			--count;
//			cout<<"No. of object destroyed: "<<count<<endl;
//		}
		void d(){
			cout<<"A is: "<<a<<" and B is: "<<b<<endl;
		}
	
};

int main(){
	demo aa,bb,cc;
	{
		demo dd;
	}
	demo mr;
	mr.d();
	demo xyz(10);
	demo aaa(xyz);	
//	demo aa1;
//	aa1.demo();
	
//	demo bb;
//	bb.demo();
	
//	demo cc;
//	cc.demo();
	
	
	return 0;
}
