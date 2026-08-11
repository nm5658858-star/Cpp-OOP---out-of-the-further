#include<iostream>
using namespace std;
class Engine{
	private:
		string make;
	public:
		Engine(){
			
		}
		Engine(string en):make(en){
			
		}
		void setmake(string s){
			make = s;
		}
		string getmake(){
			return make;
		}
};

class Car{
	private:
		string company, model;
		Engine engine;
	public:
		Car(){
			
		}
		Car(string c, string m, Engine e):company(c), model(m),engine(e){
			
		}
		void setcompany(string c){
			company = c;
		}
		void setmodel(string m){
			model = m;
		}
		void setengine(Engine eng){
			engine=eng;
		}
		string getcompany(){
			return company;
		}
		string getmodel(){
			return model;
		}
		Engine getengine(){
			return engine;	//return engine.getmake();
//			return engine.getmake();
		}
		void display(){
			cout<<"Company name is: "<<company<<endl;
			cout<<"Model is: "<<model<<endl;
			cout<<"Engine is: "<<engine.getmake()<<endl; 	//engine.getengine
//			cout<<"Engine is: "<<engine.getengine(); 
			
		}
};
//	void sumofdigits(){
//		int n,sum;
//	cout<<"Enter number: ";
//	cin>>n;
//	sum = 0;
//	while(n>0){				//3>0			2>0				1>0
//		sum = sum + n;		//0 = 0 + 3		3 = 3 + 2 		5 = 5 + 1
//		n--;				//
//	}
//	cout<<"Sum of given digits: "<<sum<<endl;
//	}
	
//	void sumofN_numbers(){
//		int x;
//		cout<<"Enter number: ";
//		cin>>x;
//		int n=0;
//		while(n){
//			x = x + n;		//3 = 3 + 0		2 = 
//			x--;
//		}
//		cout<<"Sum of N numbers is: "<<n<<endl;
//	}
//	void revNumber(){
//		int x;
//		cout<<"Enter number for reverse: ";
//		cin>>x;
//		int rev = 0;
//		while(x!=0){
//			rev = rev * 10 + x % 10;
//			x/=10;
//		}
//		cout<<"Reverse of "<<x<<" is: "<<rev<<endl;
//	}

int main(){
	Engine e;
	e.setmake("2NZ-FE");
	Car mycar;
	mycar.setcompany("Toyota");
	mycar.setmodel("Corolla-GLI");
	mycar.setengine(e);		//mycar.setengine("2NZ-FE");
	mycar.display();
	Engine e2("V8");
	Car newcar("Toyota","Cruiser",e2);
	cout<<"\nNew Car characteristics\n";
	newcar.display();
	return 0;
	
	
	
//	sumofdigits();
//	revNumber();
//	sumofN_numbers();
}






