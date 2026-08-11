#include<iostream>
using namespace std;
int main(){
//	int i;
//	int marks[] = {34,53,65,85,98};
//	cout<<marks[0]<<endl;
//	cout<<marks[1]<<endl;
//	cout<<marks[2]<<endl;
//	cout<<marks[3]<<endl;
//	cout<<marks[4]<<endl;
//	cout<<endl;
////	for(int j=0;j<5;j++){
////		cin>>marks[j];
////	}
//		cout<<endl;
//	for(int j=0;j<5;j++){
//		cout<<marks[j]<<endl;
//	}
	
//	int m[5];
//	for(int j=0;j<5;j++){
//		cin>>m[j];
//	}
//		cout<<endl;
//	for(int j=0;j<5;j++){
//		cout<<m[j]<<endl;
//	}
//	
//	int mathmarks[8];
//	mathmarks[0] = 232;
//	mathmarks[1] = 3434;
//	mathmarks[2] = 838;
//	mathmarks[3] = 747;
//	cout<<mathmarks[0]<<endl;
//	cout<<mathmarks[1]<<endl;
//	mathmarks[2] = 89;
//	cout<<mathmarks[2]<<endl;
//	cout<<mathmarks[3]<<endl;
//	cout<<endl;
//	int marks2[] = {45,45,45,45,45};
////    int marks2[4];
//	marks2[0]=76;
//	marks2[1]=78;
//	marks2[2]=98;
//	marks2[3]=34;
//	cout<<marks2[0]<<endl;
//	cout<<marks2[1]<<endl;
//	cout<<marks2[3]<<endl;

	//pointers
//	int age = 56;
//	int *pAge = &age;
//	cout<<pAge<<endl;
//	cout<<*pAge<<endl;
//	int arr = 43;
//	int *pArr = &arr;
//	cout<<"address"<<pArr<<endl;
//	cout<<"value"<<*pArr<<endl;
////	

//	char grade[4];
//	char *Pgrade = grade;
//	for(int t=0;t<4;t++){
//		cin>>grade[t];
//	}
//	cout<<Pgrade<<endl;

	
//	string name = "SABA";
//	string *pname = &name;
//	cout<<pname<<endl;
//	cout<<*pname<<endl;
	
	
//	for(int n=0;n<5;n++){
//		cout<<brr[n]<<endl;
//		cout<<&brr[n]<<endl;	
//	}
	
//	char h[2] = {'a','b'};
//	char *Ph = h;
//	for(int i=0;i<2;i++){
//		cout<<h[i]<<endl;
//	}

	
//	int arr[5] = {1,2,3,4,5};
//	int *parr = arr;
//	for(int x=0;x<5;x++){
//	cout<<arr[x]<<endl;
//	}
	
//	int *y = NULL;
//	y = new int;
//	*y= 44;
//	cout<<"Value is:"<<*y<<endl;
//	cout<<"Address is:"<<y<<endl<<endl;
//	delete y;

	int *saba = NULL;
	int sz;
	cout<<"Enter size:";
	cin>>sz;
	saba = new int[sz];
	for(int x=0;x<sz;x++){
		cout<<"Enter number"<<x+1<<":"<<endl;
		cin>>saba[x];
	}
	for(int x=0;x<sz;x++){
		cout<<saba[x]<<endl;
	}

//	int *arr = NULL;
//	int size;
//	cout<<"Enter val:"<<endl;
//	cin>>size;
//	arr = new int[size];
//
//	for(int y=0;y<size;y++){
//		cout<<"Enter number "<<y+1<<":";
//	cin>>arr[y];
//} 
//
//	for(int y=0;y<size;y++){
//		
//		cout<<"Number is:"<<arr[y]<<endl;
//	}
//	delete arr[];

	
//	string freePizza[5] = {"Pizza1","Pizza2","Pizza3","Pizza4","Pizza5"};
//	string *pFreePizza  = freePizza;
//	for(int i=0;i<5;i++){
//		cout<<freePizza[i]<<endl;
//	}
//	cout<<pFreePizza<<endl; 
	
//	
//	int num[10] = {110,213,234,345,546,575,765,454,675,876};
//	int *pNum = num;
//	for(int j=0;j<10;j++){
//		
//	cout<<num[j]<<endl;
//	}
//	cout<<pNum<<endl;
	
	//functions
//	int sum(int a,int b){
//		int c = a + b;
//		return c;
//	}
//	 
//
////	for(i = 0;i<=4;i++){
////		cout<<"The value of "<<i<<" is: "<<marks[i]<<endl;
////	}
////	cout<<endl;
//	for(int j = 0;j<=3;j++){
//		cout<<"The value of "<<j<<" is "<<mathmarks[j]<<endl;
//	}
//	cout<<endl;
//	for(int k = 0;k<=4;k++){
//		cout<<"The value of "<<k<<" is: "<<marks2[k]<<endl;
//	}
//	int num1,num2;
//	cout<<"Enter first number: ";
//	cin>>num1;
//	cout<<"Enter second number: ";
//	cin>>num2;
//	cout<<sum(num1,num2);
	return 0;
}






