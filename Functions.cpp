#include<iostream>
using namespace std;
float ave(float a, float b,float c);//{
//	float (a+b+c)/3;
//	return c;
//}



int main(){
	

int x1,y1,z1;
cout<<"Enter num1:";
cin>>x1;
cout<<"\nEnter num2:";
cin>>y1;
cout<<"\nEnter num2:";
cin>>z1;
cout<<"Average is:"<<ave(x1,y1,z1)<<endl;

	return 0;
}

//	return r;
//}
float ave(float p, float q, float s){
	int c = (p+q+s)/3;
	return c;


