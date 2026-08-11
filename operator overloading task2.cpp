//#include<iostream>
//using namespace std;
//class point{
//	private:
//		int x,y;
//	public:
//		point(): x(0), y(0){
//			
//		}
//		point(int a, int b): x(a), y(b) {
//			
//		}
//		point operator++ (int){
//			x++;
////			point temp;
////			temp x = x;
//			return temp;
//		}
//		void show(){
//			cout<<"Value of X: "<<x<<endl;
//		}
//};
//int main(){
//	point p1;
//	p1++;
//	p1.show();
//	
//	
//	return 0;
//}
//



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
		y++;
	}
	point operator-- (int ){
		y--;
	}
	void showx(){
		cout<<"Value of X: "<<x<<endl;
	}
	void showy(){
		cout<<"Value of Y: "<<y<<endl;
	}
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
	p1.showy();	
	--p1;	
	cout<<"After pre-fix decrement overloading: \n";
	p1.showy();
	cout<<endl<<endl;
	
	cout<<"Before Post-fix decrement overloading: \n";
	p1.showy();	
	p1--;	
	cout<<"After Post-fix increment overloading: \n";
	p1.showy();
	
	return 0;
	
}
