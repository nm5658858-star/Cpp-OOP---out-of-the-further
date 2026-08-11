#include<iostream>
using namespace std;

class xyz{
	int a,b,c ;
	public:
		void inputdata();
		void display();
		void putdata(){
			cout<<"\nA is: "<<a<<" and B is: "<<b<<endl;
		}
		void inputnum(){
			cout<<"\nEnter any number: ";
			cin>>c;
		}
		void any(){
			int z;
			cout<<"Enter num: ";
			cin>>z;
			cout<<"Number is: "<<z<<endl;
		}
		
};
void xyz::display(){
	cout<<"C is: "<<c<<endl;
}
void xyz::inputdata(){
	cout<<"Enter two numbers: \n";
	cin>>a>>b;
}

int main(){
//	int n;
//	cout<<"Enter n: ";
//	cin>>n;
//	xyz some[n];
//	for(int a=0;a<n;a++){
//		some[a].inputdata();
//	}
//	for(int b=0;b<n;b++){
//		some[b].putdata();
//	}
	
//	xyz aa[5];                       	      				    
//	for(int i = 0; i<5;i++){
//		aa[i].inputdata();
//	}
//	for(int i=0;i<5;i++){
//		aa[i].putdata();
//	}

	xyz bb;
	bb.inputnum();
	bb.display();
	bb.any();
	
	int x =10,y=20,z=30;
	if(x>y){
		if(x>z)
			cout<<"X is maximum";
		else
			cout<<"Z is maximum";
	}
	else{
		if(y>z)
			cout<<"Y is maximum";
		else
			cout<<"Z is maximum";
	}

	
	
	
	
	
	return 0;
}
