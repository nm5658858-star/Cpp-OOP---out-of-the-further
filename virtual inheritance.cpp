#include<iostream>
using namespace std;
class A{
	protected:
		
	public:
		void message(){
			cout<<"Welcome to Inheritance!"<<endl;
		}
};

class B: virtual public A{
	protected:
		
	public:
		void display(){
		cout<<"Inside class B: "<<endl;
		}
};

class C:virtual public A{
	protected:
		
	public:
		void show(){
			cout<<"Inside class C: "<<endl;
		}
};
class D: public B, public C{
	protected:
		
	public:
		void nowinput(){
			cout<<"Showing Inheritance: "<<endl;
		}
		void total(){
			message();
			display();
			show();
			nowinput();
		}
};

//   VIRTUAL KA MATLAB HAI KE (YAHAN PAR), AAP JO CHEEZ B MAI YA C MAI HAI USKO LE LO, KIU K A MAI BHI WOHI CHEEZ HAI 
//   TO ISS SE FARQ NAI PARY GA KE AAP A SE LO, B SE LO, YA PHIR C SE LO....BSS LE LO KIU KE A MAI BHI SAME CHEEZ HAI

int main(){
	B aa; 
	aa.display();
	aa.message();
	C bb;
	bb.show();
	bb.message(); 
	D cc;
//	cc.nowinput();
//	cc.display();
//	cc.show();
//	cc.message();
	cout<<"\n\n";
	cc.total();
	
	return 0;
}
