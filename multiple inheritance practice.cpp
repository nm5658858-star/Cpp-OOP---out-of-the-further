#include<iostream>
using namespace std;
class a1{
	protected:
		int a;
	public:
		a1():a(0){
			cout<<a;		
		}
		a1(int x) : a(x){
			
		}
		~a1(){
		}
}; 
class b1:virtual public a1{
	protected:
		int b;
	public:
		b1(): b(0){
		}
		b1(int y) : b(y){
			
		}
		~b1(){
		}
};
class c1: public virtual a1,public b1{
	protected:
		int c;
	public:
		c1():a1(0),b1(0),c(0){
		}
		c1(int x, int y, int z) :a1(x), b1(y), c(z){
//			c=z;
		}
		~c1(){
		}
		void display(){
			cout<<"output is"<< a<<b<<c;
		}

};

int main(){
	c1 cc(5,6,7);
	cc.display();
//	cc.a1(2);
//	cc.b1(3,4);
//	cc.c1(5,6,7);
	
	return 0;
}
