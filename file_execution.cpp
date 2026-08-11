#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	ofstream fout("student.txt");
	
	fout<<"Ali"<<endl;
	fout<<1<<endl;
	fout<<2<<endl;
	
	fout<<"Salman"<<endl;
	fout<<2<<endl;
	fout<<33<<endl;
	
	fout<<"Taimoor"<<endl;
	fout<<21<<endl;
	fout<<11<<endl;
	
	fout<<"Ahmed"<<endl;
	fout<<9<<endl;
	fout<<10<<endl;
	
	fout<<"Hamza"<<endl;
	fout<<22<<endl;
	fout<<23<<endl;
	
fout.close();
return 0;
}
