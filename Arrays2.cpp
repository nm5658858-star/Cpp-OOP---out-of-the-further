#include<iostream>
using namespace std;
int main(){
//int ar1[10];
//	for(int i=1;i<=10;i++)
//	{
//       cin>>ar1[i];
//	}
//	
//	int ar2[10];
//	for(int j =1;j<=10;j++){
//	cin>>ar2[j];
//	}
//
//    int ar3[10];
//    for(int k = 1;k<=10;k++){
//    	ar3[k]=ar1[k]+ar2[k];
//    	cout<<ar3[k]<<endl;
//	}
//	
//	int ar4[10];
//	for(int l = 1;l<=10;l++){
//		ar4[l] = ar3[l];
//		cout<<ar4[l]<<endl;
//	}
//	
//	int ar5[10];
//	for(int m = 10;m>=1;m--){
//		ar5[m] = ar3[m];
//		cout<<ar5[m]<<endl;
//		
//	}
//PART A IS FOR DELARING AN INTEGER ARRAY OF SIZE 10 (AR1)
int ar1[10];
//PART B IS TO STORE MULTIPLES OF 5 INTO THIS ARRAY(AR1)
	cout<<"PART B IS TO STORE MULTIPLES OF 5 INTO THIS ARRAY(AR1)\n";
for(int i=5;i<50;i+=5)	
{
cin>>ar1[i];
}

//PART C IS FOR DECLARING AN ARRAY AR2
int ar2[10];
//PART D IS TAKING INPUT OF AR2 FROM USER
	cout<<"PART D IS TAKING INPUT OF AR2 FROM USER\n";
for(int i=0;i<10;i++)	
{
cin>>ar2[i];
}

//PART E IS FOR STORING THE SUM OF AR1 AND AR2
int ar3[10];
	cout<<"PART E IS FOR STORING THE SUM OF AR1 AND AR2\n";
for(int i=0;i<10;i++){
	ar3[i] = ar1[i] + ar2[i];
	cout<<ar3[i]<<endl;
}

//PART F IS FOR STORING CONTENT OF AR3 INTO AR4
int ar4[10];
	cout<<"PART F IS FOR STORING CONTENT OF AR3 INTO AR4\n";
for(int i=0;i<10;i++){
	ar4[i] = ar3[i];
	cout<<ar4[i]<<endl;
}

//PART G IS FOR COPYING THE CONTENTS OF AR3 INTO AR5 IN REVERSE ORDER
int ar5[10];
	cout<<"PART G IS FOR COPYING THE CONTENTS OF AR3 INTO AR5 IN REVERSE ORDER\n";
for(int i=9;i>0;i--){
	ar5[i] = ar3[i];
	cout<<ar5[i]<<endl;
}


	return 0;
}




