#include<iostream>
using namespace std;
//int sum(int a,int b){
//	int c= a+b;
//	return c;
//}

void swap(int a,int b){      // temp  a  b
	int temp = a;			 // 4     4  5
	a=b;					 // 4     5  5
	b=temp;					 // 4     5  4
}

void swapp(int* a,int* b){
	int temp = *a;
	*a=*b;
	*b=temp;
}

void swapRefVar(int &a,int &b){
	int temp = a;
	a=b;
	b=temp;
}

//int sumN(int n){
//	int s=0;
//	for(int i=1;i<=n;i++){
//		s+=1;
//	}
//	return s;
//}

int main(){
	int a=4 , b=5;
//	cout<<"Sum is: "<<sum(4,5);
	swap(a,b);											 //It will not swap and will only copy.
	cout<<"Value before swapping  :"<<a<<" "<<b<<endl;
//	swapp(&a,&b);                                        //Swap a and b using pointer reference
//	cout<<"Value after  swapping  :"<<a<<" "<<b<<endl;
	swapRefVar(a,b);									 //Swap a and b using refernce variables
	cout<<"Value after  SwapRefVar:"<<a<<" "<<b<<endl;
//	cout<<sumN(10)<<endl;
	return 0;
}

