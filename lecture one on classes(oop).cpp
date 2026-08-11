#include <iostream>
using namespace std;
class sir{
    private:
    int a,b;
    public:
    int c,d;
    void f1(int i){
        a = i;
    }
    void f2(int j){
        b = j;
    }
    void display(){
        cout<<"Sir Khurram wala code: "<<a<<" "<<b<<endl;
    }
};
//class tut{
//    private:
//      int e,f,g;
//    public:
//   	 int h,i;
//    void f3(int x, int y, int z);
//    void f4(){
//    cout<<"Harry wala code:\n";
//    cout<<h<<endl;;
//    cout<<i<<endl;
//    cout<<e<<endl;      
//    cout<<f<<endl;
//    cout<<g<<endl;
//  
//    }
//};
//void tut :: f3(int x, int y, int z){
//    e = x;
//    f = y;
//    g = z;
//}
int main() {
    sir khurram;
//    khurram.c = 10
//    khurram.d = 20;
    khurram.f1(1);
    khurram.f2(2);
    khurram.display();
//    tut harry;
//    harry.h = 33;
//    harry.i = 44;
//    harry.f3(55,66,77)
//    harry.f4();
    return 0;
}



