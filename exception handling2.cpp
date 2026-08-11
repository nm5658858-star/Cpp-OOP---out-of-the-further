// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter first number: ";
    cin>>a;
    try{
        if(a==10){
            throw(a);
        }
        if(a==100){
        	throw('E');
		}
		if(a == 1000){
			throw(5.55);
		}
        
    }
    // *** 		MULTIPLE CATCH STATEMENTS	***
    catch(int a){
        cout<<"Zero: \n";
    }
    catch(char a){
    	cout<<"Char: "<<endl;
	}
	catch(float a){
		cout<<"Float: \n";
	}
	
	//// *** SINGLE CATCH STATEMENT FOR MULTIPLE EXCEPTIONS	***
	
//	catch(...){
//		cout<<"Some Error occoured! \n";
//	}
    
    return 0;
}
