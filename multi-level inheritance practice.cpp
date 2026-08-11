#include<iostream>
using namespace std;
class person{
	private:
		string name;
	public:
		person(string n):name(n){
			
		}
		void setname(string n){
			name = n;
		}
		string getname(){
			return name;
		}
		void show(){
			cout<<"Name is: "<<name<<endl;
		}
};
int main(){
	person p("Ali");
	p.show();
}
