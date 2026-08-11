#include<iostream>
using namespace std;
class demo{
	private:
		int x,y;
	public:
		void in(){
			cout<<"Enter two numbers: ";
			cin>>x>>y;
		}
		void out(){
			cout<<"X is: "<<x<<" and Y is: "<<y<<endl;
		}
		void operator= (demo bb){
			x = bb.x;
			y = bb.y;
		}
};
int main(){
	demo ii, jj;
	jj.in();
	ii = jj;
	ii.out();
	jj.out();

	
	
	return 0;
}
