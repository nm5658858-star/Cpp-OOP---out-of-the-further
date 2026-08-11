#include<iostream>
using namespace std;

class code{
	int i,j;
	public:
		void input();
		friend int div(code);			// class ka name inside paranthesis
		friend int pro(code);		    // class ka name inside paranthesis
};
void code::input(){{
			cout<<"Enter first number: ";
			cin>>i;
			cout<<"Enter second number: ";
			cin>>j;
		}
}

int div(code obj){				// jis class se deal kr rahy hain wo...or jo object hai wo
	return (obj.i / obj.j);
}

int pro(code aa){			   // jis class se deal kr rahy hain wo...or jo object hai wo
	return (aa.i * aa.j);
}

int main(){
	code obj;
	obj.input();
	cout<<"Division is: "<<div(obj)<<endl;			//jis function se deal kr rahy hain wo...or jo object hai wo
	
	code aa;
	aa.input();
	cout<<"Product is: "<<pro(aa)<<endl;	       //jis function se deal kr rahy hain wo...or jo object hai wo
	return 0; 
}



