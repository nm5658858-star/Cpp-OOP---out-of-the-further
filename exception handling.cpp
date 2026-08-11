// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void exc(){
    
}
int main() {
    // exc();
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"\nEnter second number: ";
    cin>>b;
    try{
        if(b==0){
            throw(b);
        }
        else{
            c = a / b;
            cout<<"Division: "<<c<<endl;
        }
    }
    catch(int b){
        cout<<"Can't divide by 0\n";
    }
//    int h=2,i=0,j;
//    j=h/i;
//    cout<<j;
    return 0;
}
