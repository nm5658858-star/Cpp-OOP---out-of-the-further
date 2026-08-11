#include<iostream>
using namespace std;
class Company{
  string companyName;
  public:
    void setcompanyName(string cn){
        companyName = cn;
    }
    string getcompanyName(){
        return companyName;
    }
};
class Employee{
  string name;
  Company* company;
  public:
    void setname(string n){
        name = n;
    }
    void setcompany(Company* co){
        company = co;
    }
    string getname(){
        return name;
    }
    // Company getcompany(){
    //     return *company;
    // }
    void displaydetails(){
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Works at: "<<company->getcompanyName()<<endl;
    }
};

int main() {
    Company com;
    com.setcompanyName("Google");
    Employee emp;
    emp.setname("John Doe");
    emp.setcompany(&com);
    emp.displaydetails();
    return 0;
}

