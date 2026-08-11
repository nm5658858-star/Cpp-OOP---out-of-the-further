#include<iostream>
using namespace std;

void printMatrix(int mat[3][4])
{
	for(int x=0;x<3;x++){
		for(int y=0;y<4;y++){
			cout<<"\t"<<mat[x][y];
		}
		cout<<endl;
	}	
}

int main(){
	int mat_a[3][4];
//	 {1,2,3,4},
//	 {1,2,3,4},
//	 {1,2,3,4}
//	};
	int mat_b[3][4];
//	{1,1,1,1},
//	{2,2,2,2},
//	{3,3,3,3}
//	};

	for(int q = 0;q<3;q++){
		for(int r = 0;r<4;r++){
//			cout<<"Matrix A is:";
			cout<<"Matrix A is ["<<q<<"]["<<r<<"]:";
//			cout<<"Number for matrix_a is:\n";
			cin>>mat_a[q][r];
			cout<<endl;
		}
	}
	
	for(int c=0;c<3;c++){
		for(int d = 0;d<4;d++){
				cout<<"Matrix B is ["<<c<<"]["<<d<<"]:";
//			cout<<"Enter number for matrix_b\n";
			cin>>mat_b[c][d];
			cout<<endl;
		}
	}
	
	cout<<"SUM\n";
	int sum[3][4];
	for(int e = 0;e<3;e++){
		for(int f = 0;f<4;f++){
		    sum[e][f] = mat_a[e][f] + mat_b[e][f];
			cout<<" "<<sum[e][f];
		}
		cout<<"\n";
	}
	cout<<"DIFFERENCE\n";
	int diff[3][4];
	for(int g = 0;g<3;g++){
		for(int h = 0;h<4;h++){
			diff[g][h] = mat_a[g][h] - mat_b[g][h];
			cout<<" "<<diff[g][h];
		}
		cout<<endl;
	}
	
//	cout<<"PRODUCT\n";
//	int pro[3][4];
//	for(int i = 0;i<3;i++){
//		for(int j = 0;j<4;j++){
//			pro[i][j] = mat_a[i][j] * mat_b[i][j];
//			cout<<pro[i][j];
//		}
//		cout<<endl;
//	}

    cout<<"Matrix_a is:\n";
//    for(int x=0;x<3;x++){
//    	for(int y=0;y<4;y++){
//    		cout<<"\t\t\t"<<mat_a[x][y];
//		}
//		cout<<endl;
//	}
	printMatrix(mat_a);
	
	cout<<"TRANSPOSE of matrix_a:\n";

     for(int r=0;r<4;r++){
     	for(int p=0;p<3;p++){
     		cout<<"\t\t\t"<<mat_a[p][r];
		 }
		 cout<<endl;
	 }
 
	
//	printMatrix(mat_b);
	cout<<"Matrix_b is:\n";
	for(int s = 0;s<3;s++){
		for(int t = 0;t<4;t++){
			cout<<"\t\t\t"<<mat_b[s][t];
		}
		cout<<endl;
	}

	return 0;
}



