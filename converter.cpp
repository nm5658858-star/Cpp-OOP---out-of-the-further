#include<iostream>
using namespace std;
float in_cel(float cel){
	return(cel * 9.0/5.0) + 32;
}

int main(){
	int temp;
	cout<<"Temprature in Celcius 22 , Temprature in Fahrenheit:"<<in_cel(22)<<endl;
	cout<<"Temprature in Celcius 60.5, Temprature in Fahrenheit:"<<in_cel(60.5)<<endl;
	cout<<"Temprature in Celcius 40.4 , Temprature in Fahrenheit:"<<in_cel(40.4)<<endl;
	cout<<" temp:";
	cin>>temp;
	cout<<"Temp in farh is:"<<in_cel(temp)<<endl;
	
	return 0;
}





