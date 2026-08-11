#include<iostream>
using namespace std;
int main(){
	int arr[10];
	
	for(int i=0;i<10;i++){
		cout<<"Enter arr:";
	cin>>arr[i];
	}
	for(int x=0;x<10;x++){
		cout<<"Arr actual order"<<arr[x]<<endl;
	}
	cout<<"\n";
	for(int y=9;y>=0;y--){
		cout<<"Arr in rev"<<arr[y]<<endl;
	}
	cout<<"\n";
	int brr[10];
	for(int j=0;j<10;j++){
		brr[j] = arr[j];
		
		cout<<"Brr is:"<<brr[j]<<endl;
		
	}
	cout<<"\n";

	int crr[10];
	for(int k=9;k>=0;k--){
		crr[k] = arr[k];
		cout<<"Crr is:"<<crr[k]<<endl;
	}
	cout<<"\n";
	int drr[10];
	for(int l=0;l<10;l++){
		drr[l] = arr[l] + crr[l];
		cout<<"Drr is(arr+crr):"<<drr[l]<<endl;
	}
	cout<<endl;
	
	for(int a=0;a<10;a++){
		if(arr[a]%2==0)
		cout<<"Even arr is:"<<arr[a]<<endl;
	}
	cout<<endl;


	for(int b=0;b<10;b++){
		if(arr[b]%2!=0)
		cout<<"Odd arr is:"<<arr[b]<<endl;
	}
	cout<<endl;
	
//	for(int c=0;c<10;c++){
//	cin>>arr[c];
//	}
//	for(int d=0;d<10;d++){
//		cout<<"Arr actual order is:"<<arr[d]<<endl;
//	}

	return 0;
}

