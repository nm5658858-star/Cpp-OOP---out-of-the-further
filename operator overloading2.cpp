#include<iostream>
using namespace std;
class point{
	private:
		int x,y;
	public:
	point():x(1), y(2){
		
	}
	point(int a, int b):x(a), y(b){
		
	}
	point operator++ (){
		++x;
	}
	point operator-- (){
		--x;
	}
	point operator++(int ){
		x++;
	}
	point operator-- (int ){
		x--;
	}
	void showx(){
		cout<<"Value of X: "<<x<<endl;
	}
//	void showy(){
//		cout<<"Value of Y: "<<y<<endl;
//	}
};

int main(){
	point p1;
	cout<<"Before prefix increment overloading: \n";
	p1.showx();
	++p1;
	cout<<"After prefix increment overloading: \n";
	p1.showx();
	cout<<endl<<endl;
	
	cout<<"Before Post-fix increment overloading: \n";
	p1.showx();	
	p1++;	
	cout<<"After Post-fix increment overloading: \n";
	p1.showx();
	cout<<"------------------\n";
	cout<<endl<<endl;
	
	
	cout<<"Before pre-fix decrement overloading: \n";
	p1.showx();	
	--p1;	
	cout<<"After pre-fix decrement overloading: \n";
	p1.showx();
	cout<<endl<<endl;
	
	cout<<"Before Post-fix decrement overloading: \n";
	p1.showx();	
	p1--;	
	cout<<"After Post-fix increment overloading: \n";
	p1.showx();
	
	return 0;
	
}

















