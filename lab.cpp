#include<iostream>
using namespace std;
int main(){
	int sum,marrks;
	float avg;
	int minMark= INT_MAX;
	int maxMark = INT_MIN;
	string names[10] = {"sara","sana","ahmad","ali","saba","kamran","adeel","imran","hina","adnan"};
	 int marks[10];
	for(int i=0;i<10;i++){
		cout<<"Enter marks of "<<names[i]<<":";
		cin>>marks[i];
	}
	cout<<endl;
	for(int j=0;j<10;j++){
		cout<<"Student name is:"<<names[j]<<"\t"<<"and marks are:"<<marks[j]<<endl;
	}
//	cout<<"\n";
//	
//	for(int k=0;k<10;k++){
//		sum+=marks[k];
//	
//   }
//
//	avg =sum/10;
//	cout<<"Average marks are:"<<avg<<endl;
  
	
	
	return 0;
}


