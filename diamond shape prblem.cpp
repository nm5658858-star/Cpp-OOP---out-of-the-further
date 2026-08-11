
/*





	
	task-2 home ///

Create 4 students s1,s2,s3 and s4 
s1 = Ali,1001,3.5
s2 = Hina,1002,3.7
s3 = Kamran,1003
s4 = Ahmad, 10004
update cgpa of s1 to 3.3
s4 to 3.2
updated name of s4 from ahmad to ahmed 
print complete details of of s4 before and after the modification
*/
#include<iostream>
using namespace std;
class person{
    protected:
        string name;
        int age;
    public:
        person(string n, int a):name(n),age(a){
        	//name = n;
			//age = a;
            cout<<"Ctor called"<<endl;
        }
        void display(){
            cout<<"Name is: "<<name<<" and age is: "<<age<<endl; 
        }
};
class faculty : virtual public person{
  protected:
    string department;
  public:
    faculty(string n, int a, string d) : person(n,a), department(d)   // ? No extra {}
{		//department = d;
    cout << "Faculty constructor called\n";
}
};

class student: virtual public person{
  protected:
    string major;
  public:
    student(string n, int a, string m) : person(n,a), major(m)
    {
        cout<<"Student ctor called"<<endl;
    }
};
class TA:public faculty, public student{
  public:
    TA(string n, int a, string d, string m):person(n,a), faculty(n,a,d), student(n,a,m){
        cout<<"TA ctor called\n";
    }
    void display(){
    	person::display();
        cout<<"Department is: "<<department<<" and Major is: "<<major<<endl;
    }
};
int main(){
    TA t("Ali",21,"CS","computer Science");
//    t.person::display();
    t.display();
    
    return 0;
}
