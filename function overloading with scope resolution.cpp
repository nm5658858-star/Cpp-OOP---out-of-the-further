#include<iostream>
using namespace std;
class test{
	public:
		void fn(int a);
		void fn(char c,float f);
		void fn(char c);
		void fn(string s);
		void show(int i, float f, bool b);
		void show(float f, string s);
		void show(double d);
		void show(char c, int i, float f, string s, bool b);
		void show(string s1, string s2);		
};

	void test::fn(int a){
		cout<<"(Version-1)\nInt version: ("<<a<<") called: "<<endl;
	}
	void test::fn(char c,float f){
		cout<<"(Version-2)\nChar version: ("<<c<<") and Float version: ("<<f<<") called: "<<endl;
	}
	void test::fn(char c){
		cout<<"(Version-3)\nCharacter version: ("<<c<<") called: "<<endl;
	}
	void test::fn(string s){
		cout<<"(Version-4)\nString version: ("<<s<<") called: "<<endl;
	}
	void test::show(int i, float f, bool b){
		cout<<"(Version-5)\nInt version ("<<i<< ") Float version ("<<f<<") & Bool version ("<<b<<") called: "<<endl;
	}
	void test::show(float f, string s){
		cout<<"(Version-6)\nFloat version ("<<f<<") and string version ("<<s<<") called: "<<endl;
	}
	void test::show(double d){
		cout<<"(Version-7)\nDouble version ("<<d<<") called: "<<endl;
	}
	void test::show(char c, int i, float f, string s, bool b){
		cout<<"(Version-8)\nChar version ("<<c<< ") Int version ("<<i<<") Float version ("<<f<<") string version ("<<s<<") bool version ("<<b<<") called: "<<endl;
	}
	void test::show(string s1, string s2){
		cout<<"(Version-9)\n First String ("<<s1<<") and Second String ("<<s2<<") called: "<<endl;
	}

int main(){
	test t1;
	t1.fn(12);
	t1.fn('A',11.1);
	t1.fn('A');
	t1.fn("Myself");
	t1.show(111,2.2,false);
	t1.show(22.3,"Hello World");
	t1.show(67.2341701067296);
	t1.show('C',114,98.45,"Programming is fun",true);
	t1.show("C++ creator","Bjarne Stroustrup");
}
