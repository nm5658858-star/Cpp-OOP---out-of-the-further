#include<iostream>
using namespace std;
class test{
	
	public:
	void fn(int i){
		
		cout<<"Int version called: "<<i<<endl;
	}
	void fn(char c){
		cout<<"Character version called: "<<c<<endl;
	}
	void fn(bool b){
		cout<<"Bool version called: "<<b<<endl;
	}
	void fn(string s){
		cout<<"String version called"<<s<<endl;
	}
};
int main(){
	test t1,t2,t3,t4,t5;
	t1.fn(12);
	t3.fn('a');
	t4.fn(true);
	t5.fn("Myself");
}

