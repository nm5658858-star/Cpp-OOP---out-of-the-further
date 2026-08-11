#include<fstream>
#include<iostream>
using namespace std;
int main(){
	int numberStudents = 7;
	cout<<"Enter number of students:";
	cin>>numberStudents;

	ofstream fout("student.txt");
	fout<<numberStudents<<endl;
	for(int i=0;i<numberStudents;i++){
		string name;
		int rollNumber;
		int marks;
		double gpa;
	
	cout<<"Enter student#"<<i+1<<" details: "<<endl;
	cout<<"Name:";
	cin.ignore();
	getline(cin,name);
	cout<<"Roll Number:";
	cin>>rollNumber;
	cout<<"Marks: ";
	cin>>marks;
	cout<<"GPA: ";
	cin>>gpa;
	

	
	cout<<"Student "<<i+1<<" details saved"<<endl;
}
fout.close();
cout<<"All student details saved to student.txt file."<<endl;

return 0;
}
