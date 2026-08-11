#include<iostream>
using namespace std;
int main(){
int x = 10;              //assigns a value to x i.e. 10
int &r = x;              // assigns values whatever is in x to r i.e. 10 in this case
////	int *r =  &x;            //gives adress of x to a poimter variable r
////	cout<<*r<<endl;          //gives value of r i.e. 10 if it is pointing
	cout<<&r<<endl;           //prints r i.e. 10
	cout<<x<<endl;           //prints x i.e. 10
	x = 20;                  //assigns a value to x i.e. 20
	cout<<x<<endl;           //prints x i.e. 20 now
	cout<<"THIS "<<r<<endl;           //prints r i.e. 20
	r = 30;                  //assigns a value to r i.e. 30 now
	cout<<x<<endl;           //prints x i.e. 20
	cout<<r<<endl;           //prints r i.e. 30 now
	cout<<&x<<endl;          //prints adress of x
	cout<<r<<endl;
//	.................

//...DYNAMIC MEMORY ALLOCATION

int *pNum = NULL;
pNum = new int;
*pNum = 21;
cout<<pNum<<endl;
cout<<*pNum<<endl;


int *u = NULL;
u = new int;
*u = 23;
cout<<u<<endl;
cout<<*u<<endl;

int *yumm = NULL;
yumm = new int ;
*yumm = 99;
cout<<yumm<<endl;
cout<<*yumm<<endl;
//int *r = NULL;
//r = new int;
//*r= 22;
//cout<<"adress: "<<r<<endl;
//cout<<"value: "<<*r<<endl;
//delete r;

//int *p = NULL;
//p = new int;
//*p =1;
//cout<<"adress: "<<p<<endl;
//cout<<"value: "<<*p<<endl;


//char *pGrades = NULL;  //1
//int size;
//cout<<"How many grades to enter in? ";
//cin >>size;
//pGrades = new char[size];  //2
//for(int i=0;i<size;i++){
//	cout<<"Enter grades "<<i+1<<": ";
//	cin>>pGrades[i];
//}
//for(int i=0;i<size;i++){
//	cout<<pGrades[i]<<" "<<endl;
//}
//delete[] pGrades;

//int *pNumm = NULL;
//int size;
//cout<<"How many numbers?:";
//cin>>size;
//pNumm = new int[size];
//for(int i=0;i<size;i++){
//	cout<<"Enter number"<<i+1<<":";
//	cin>>pNumm[i];
//}
//for(int i=0;i<size;i++){
//	cout<<"Numbers entered are:"<<pNumm[i]<<endl;
//}
//delete[] pNum;

//string *pNames = NULL;
//int size;
//cout<<"How many names you want to enter?:";
//cin>>size;
//pNames = new string[size];
//for(int i=0;i<size;i++){
//	cout<<"Enter Name #"<<i+1<<":";
//	cin>>pNames[i];
//}
//for(int i=0;i<size;i++){
//	cout<<"Names are:"<<pNames[i]<<endl;
//}
//delete[] pNames;







//	STATIC AND DYNAMIC VARIABLE ALLOCATION
//	int x = 10;                     //assigns x a value i.e. 10 and memory assigned atcompile time or statically
//	int *p = new int;               //memory allocated at runtime or dynamically
//	cout<<p<<endl;                  //prints adress where p is located
//  cout<<*p<<endl;                 //Garbage value
//	*p = 20;                        //assigns value to p as 20
//	cout<<p<<endl;                  //prints adress where p is stored
//	cout<<*p<<endl;                 //prints value of p i.e. 20
//	cout<<x<<endl;                  //prints value of x i.e. 10
//	cout<<&x<<endl;	                //prints adress where x is stored

//	p = new int;
//	int *q = new int[4];
//	*(q+1) = 50;
//	*(q+1) = 40;
//	cout<<p<<endl;                    //prints where address of p is stored
//	cout<<*p<<endl;                  //Garbage value
//	cout<<&p<<endl;                  //prints address
//	cout<<q<<endl;                   //prints where address of q is stored
//	cout<<*q<<endl;                  //Garbage value
//	for(int a=0;a<4;a++){
//		cin>>q[a];
//	}
//		cout<<"\n\n";
	
//	for(int b=0;b<4;b++){
//		cout<<q[b]<<endl;
//	}
//	cout<<"\n\n";
	
	
//	q[1] = 50;              //Alternate method of arrays
//	q[2] = 40;
//	q[3] = 30;
//	q[4] = 20;
//	cout<<q[1]<<endl;
//	cout<<q[2]<<endl;
//	cout<<q[3]<<endl;
//	cout<<q[4]<<endl;
	 
	
	
	return 0;
}
