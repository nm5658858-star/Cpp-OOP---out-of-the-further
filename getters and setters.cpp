#include<iostream>
using namespace std;
class testing{
	private:
		int a,b;
	public: 
		void setVal(int a, int b);            //setter
		int getVal();                         //getter
	
};
void testing :: setVal(int a, int b){
	this->a = a;
	this->b = b;
}
int testing :: getVal(){
	return a+b;
}

int main(){
	testing obj;
	obj.setVal(5,8);
	cout<<obj.getVal();
	
	return 0;
}



