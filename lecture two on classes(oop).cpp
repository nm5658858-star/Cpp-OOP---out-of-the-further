//  Define a class student to represent the objects of students in the class, te attributes of student are: name, roll number and CGPA.
//  Define the setters for this class and write a display function to print the value of attribute on screen.
//  Declare 
//  Print the value of S1 and S2 on screen.

#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int roll;
		float cgpa;
	public:
		
		void fn1(string n){
			name = n;
		}
		void fn2(int r){
			roll = r;
		}
		void fn3(int c){
			cgpa = c;
		}
		void display(){
			cout<<"Name is: "<<name<<"\nroll number is: "<<roll<<" \nCGPA is: "<<cgpa<<endl;
		}
};


int main(){
	student s1,s2;
	s1.fn1("Ali");
	s1.fn2(101);
	s1.fn3(3.2);
	s1.display();
	
	s2.fn1("Sara");
	s2.fn2(102);
	s2.fn3(3.5);
	s2.display();
	
	
	return 0;
}

