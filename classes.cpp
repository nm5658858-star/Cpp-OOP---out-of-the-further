#include <iostream>
using namespace std;

class group{
	private:
		int saba,saif,asfand;
	public:
		int d,e;
		void setroll(int r1, int r2, int r3);
		void getroll(){
			cout<<"Saba's roll number is: "<<saba<<endl;
			cout<<"Saif's roll number is: "<<saif<<endl;
			cout<<"Sana's roll number is: "<<d<<endl;
			cout<<"Saad's roll number is: "<<e<<endl;
			cout<<"Asfand's roll number is: "<<asfand<<endl;
		}
};
	void group :: setroll(int r1, int r2, int r3){
		saba = r1;
		saif = r2;
		asfand = r3;
	}
	int main(){
	group secretstars;
	secretstars.d = 241995;
	secretstars.e = 242005;
	secretstars.setroll(241985,241991,242023);
	secretstars.getroll();
	
	return 0;
}

class employee{
	private:
		int a,b,c;
	public:
		int d,e,f;
		void setdata(int a1,int b1,int c1);
		void getdata(){
			cout<<"The value of a is: "<<a<<endl;
			cout<<"The value of b is: "<<b<<endl;
			cout<<"The value of c is: "<<c<<endl;
			cout<<"The value of d is: "<<d<<endl;
			cout<<"The value of e is: "<<e<<endl;
			cout<<"The value of f is: "<<f<<endl;
		}
};
void employee :: setdata(int a1, int b1, int c1){
	a = a1;
	b = b1;
	c = c1;
}

int main(){
	
	employee harry;
//	employee saif;
//	saif.d = 23;
//	saif.setdata(3,6,7);
//	saif.getdata();
	harry.d = 241985;
	harry.e = 241991;
	harry.f = 88;
	harry.setdata(1,2,4);
	harry.getdata();

}


