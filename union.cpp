#include<iostream>
using namespace std;

union money{
	int rice;
	char car;
	float pounds;
};

union group{
	int r1;
	int r2;
	int r3;
	int r4;
};


int main(){
	union money m1;
	m1.rice = 34;
	m1.car = 'M';
	cout<<"Rice is: "<<m1.car<<endl;
	
	cout<<endl<<endl;
	
	union group ss;
	ss.r1 = 241985;
//	ss.r2 = 241991;
//	ss.r3 = 241995;
//	ss.r4 = 242004;
	
	cout<<"Saba's roll number is: "<<ss.r1<<endl;
//	cout<<"Saif's roll number is: "<<ss.r2<<endl;
//	cout<<"Sana's roll number is: "<<ss.r3<<endl;
//	cout<<"Saad's roll number is: "<<ss.r4<<endl;
	
	
return 0;	
}


