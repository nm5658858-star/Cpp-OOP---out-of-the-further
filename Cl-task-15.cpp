//diamond shape
#include<iostream>
using namespace std;
int main()
{
int i,j;
for(i=1;i<=15;i++)
{
	for(j=15;j>=1;j--)
	{
	
	if(i>=j)
	cout<<"* ";
	else
	cout<<" ";
}
cout<<endl;
}
    for(i=15; i>=1;i--) {         
        for(j=15;j>=1;j--) {      
            if(i>=j)                 
                cout <<"* ";
            else
                cout <<" ";           
        }
        cout << endl;
    }



	return 0;
}


