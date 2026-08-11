#include<iostream>
using namespace std;
float val(float a, float b, float c){
	if(a<=b && b<=c){
		return a;
	}
	else if(b<=a && b<=c){
		return b;
	}
	else
	{
		return c;
	}
}

int main()
{
	float a = 3.0/2.0;
	float b = 1.0/2.5;
	float c = 2.0/5.0;
	float d = val(a,b,c);
	cout<<"Smallest fraction is = "<<d<<endl;
	
	if(a == d) {
	cout<<"Pass\n";
}
else{
	cout<<"Fail\n";
}
	return 0;
}



