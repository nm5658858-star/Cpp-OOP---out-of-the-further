#include <iostream>
using namespace std;

class point {
protected:
    int x, y;
public:
    point() { 
	
	}  

    point(int a, int b) : x(a), y(b) {
	
	} 

    ~point() { 
	} 

    void setx(int a) {
	 x = a; 
	}
    void sety(int b) { 
	y = b;
	 }
    int getx() { return x; }
    int gety() { return y; }

    void input() {
        cout<<"Enter First number: ";
        cin>>x;
        cout<< "Enter Second number: ";
        cin>>y;
    }

    void display() {
        cout << "First number is: "<<x<<" and Second number is: " <<y<<endl;
    }
    
};

class ThreeDPoint : public point {
private:
    int z;
public:
    ThreeDPoint() : point(), z(0) {
	
	 }  

    ThreeDPoint(int a, int b, int c) : point(a, b), z(c) {
	
	 } 
	 ~ThreeDPoint(){
	 	
	 }

    void setz(int c) { 
	z = c;
	 }
    int getz() {
	 return z;
	  }

    void input() {
        point::input(); 
        cout<<"Enter Other number: ";
        cin>>z;
    }              

    void display() {
        point::display(); 
        cout<<"Other number is: "<<z<<endl;
    }
};


int main() {
    point p1;
    p1.input();
    p1.display();
    cout<<endl;

    point p2(1, 2);
    p2.display();
    cout<<endl;

    ThreeDPoint t3;
    t3.input();
    t3.display();
    cout<<endl;

    ThreeDPoint t4(4, 5, 6); 
    t4.display();
    

    return 0;
}

