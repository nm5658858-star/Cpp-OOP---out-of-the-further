//       *
//      **
//     ***
//    ****
//   *****
//  ******
// *******
//********
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=7;i++)
	{
		for(k=7-i;k>=1;k--)
		cout<<" ";
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	

	return 0;
}





