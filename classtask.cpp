#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int roll;
		float cgpa;
	public:
		student(string n, int r) : name(n),roll(r){
//			cout<<"Two parameters constructor called";	
		}
		student(string n, int r, float c) : name(n),roll(r),cgpa(0.0){
//			cout<<"Three parameters constructor called";
		}
		~student(){
//			cout<<"Student Destroyed";
		}
		void setname(string n){
			name = n;
		}
		void setroll(int r){
			roll = r;
		}
		void setcgpa(float c){
			cgpa = c;
		}
		string getname(){
			return name;
		}
		int getroll(){
			return roll;
		}
		float getcgpa(){
			return cgpa;
		}
		void set(string n, int r, float c){
			name = n;
			roll = r;
			cgpa = c;
		}
				
		void input(){
			cout<<"Enter name: ";
			getline(cin,name);
			cout<<"Enter rollNo: ";
			cin>>roll;
			cout<<"Enter cgpa: ";
			cin>>cgpa;
		}
		void print(){
			cout<<"\nName is: "<<name<<endl;
			cout<<"RollNo is: "<<roll<<endl;
			cout<<"CGPA is: "<<cgpa<<endl;
		}
};


int main(){
	student s1("Ali",1001,3.5);
	student s2("Hina",1002,3.7);
	student s3("Kamran",1003);
	student s4("Ahmad",1004);
	
	s1.input();
	s1.print();
	cout<<"\nBefore modification"<<endl;
//	s1.print();
//	s2.print();
//	s3.print();
	s4.print();
	
	s1.setcgpa(3.3);
	s4.setcgpa(3.2);
	s4.setname("Ahmed");
	
	cout<<"\nAfter modification";
//	s1.print();
//	s2.print();
//	s3.print();
	s4.print();
	s4.set("jik",888,3.4);
	s4.print();
	return 0;
}
