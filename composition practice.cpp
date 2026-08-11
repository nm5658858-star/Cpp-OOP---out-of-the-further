
//---------------------------------------// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// class Author{
//     private: 
//         string name;
//         string email;
//     public:
//         Author(string n, string e):name(n),email(e){
            
//         }
//         void setname(string n){
//             name = n;
//         }
//         void setemail(string e){
//             email = e;
//         }
//         string getname(){
//             return name;
//         }
//         string getemail(){
//             return email;
//         }
//         void display(){
//             cout<<"Author name is: "<<name<<" and email is: "<<email<<endl;
//         }
        
// };
// class Book{
//     private:
//         string title;
//         float price;
//         Author author;
//     public:
//         Book(string t, float p, Author a):title(t), price(p), author(a){
            
//         }
//         void settitle(string t){
//             title = t;
//         }
//         void setprice(float p){
//             price = p;
//         }
//         string gettitle(){
//             return title;
//         }
//         float getprice(){
//             return price;
//         }
//         void display(){
//             cout<<"Book's title is: "<<title<<endl;
//             cout<<"Book's price is: "<<price<<"$"<<endl;
//             //cout<<"Book's author is: "<<author.getname()<<endl;
//             author.display();
//         }
// };
// int main(){
//     Author writer("Saif Malik", "SaifMalik2405@gmail.com");
//     Book book("C++",50,writer);
//     book.display();
    
//     return 0;
// }



//#include<iostream>
//using namespace std;
//class Engine{
//	private:
//		string make;
//		int parts;
//	public:
//		Engine(){
//			
//		}
//		void setmake(string s){
//			make = s;
//		}
//		void setparts(int p){
//			parts = p;
//		}
//		string getmake(){
//			return make;
//		}
//		int getparts(){
//            return parts;
//        }
//};
//
//class Car{
//	private:
//		string company, model;
//		Engine engine;
//	public:
//		Car(){
//			
//		}
//		void setcompany(string c){
//			company = c;
//		}
//		void setmodel(string m){
//			model = m;
//		}
//// 		void setengine(Engine eng, Engine par){
//// 			engine=eng;
//// 			engine=par;
//// 		}
//		void setengine(Engine eng){
//			engine=eng;
//            // cout<<engine.getparts();
//		}
//		string getcompany(){
//			return company;
//		}
//		string getmodel(){
//			return model;
//		}
//		Engine getengine(){
//			return engine;	//return engine.getmake();
////			return engine.getmake();
//		}
//		void display(){
//			cout<<"Company name is: "<<company<<endl;
//			cout<<"Model is: "<<model<<endl;
//			cout<<"Engine is: "<<engine.getmake()<<endl; 	//engine.getengine
////			cout<<"Engine is: "<<engine.getengine(); 
//			cout<<"Parts are: "<<engine.getparts();
//		}
//};
//int main(){
//	Engine e;
//	e.setparts(11);
//	e.setmake("2NZ-FE");
//	
//	Car mycar;
//	mycar.setcompany("Toyota");
//	mycar.setmodel("Corolla-GLI");
//	mycar.setengine(e);
//// 	mycar.setparts(e);
//	mycar.display();
//}


#include<iostream>
using namespace std;
//class Address{
//	string city;
//	int zipcode;
//	public:
//		Address(string c, int z): city(c), zipcode(z){
//			
//		}
//		void setcity(string c){
//			city = c;
//		}
//		void setzipcode(int z){
//			zipcode = z;
//		}
//		string getcity(){
//			return city;
//		}
//		int getzipcode(){
//			return zipcode;
//		}
//};
//class Student{
//	private:
//		string name;
//		int roll;
//		Address address;
//	public:
//		Student(string n, int r, Address a):name(n), roll(r), address(a){
//			
//		}
//		void display(){
//			cout<<"Name is: "<<name<<endl;
//			cout<<"Roll number is: "<<roll<<endl;
//			cout<<"Address is: "<<address.getcity()<<endl;
//			cout<<"Zipcode is: "<<address.getzipcode()<<endl;
//		}
//};
//int main(){
//	
//	Address a("FSD",67);
//	Address b("RWP",99);
//	Student s1("S1",1,a);
//	Student s2("S2",2,b);
//	s1.display();
//	s2.display();
//}

class Engine{
	private: 
		string make;
	public:
		Engine(){
			
		}
		Engine(string e):make(e){
			
		}
		void setmake(string m){
			make = m;
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
		Car(string c, string m, Engine e):company(c), model(m), engine(e){
			
		}
		void setcompany(string c){
			company = c;
		}
		void setmodel(string mod){
			model = mod;
		}
		void setengine(Engine eng){
			engine = eng;
		}
		string getcompany(){
			return company;
		}
		string getmodel(){
			return model;
		}
		Engine getengine(){
			return engine;
		}
		void display(){
			cout<<"Company is: "<<company<<endl;
			cout<<"Model is: "<<model<<endl;
			cout<<"Engine is: "<<engine.getmake()<<endl;
		}	
};
int main(){
	Engine e;
	e.setmake("2ZN-FE");
	Car mycar;
	mycar.setcompany("Toyota");
	mycar.setmodel("Corolla-GLI");
	mycar.setengine(e);
	mycar.display();
	cout<<"\nNewcar Features are:\n";
	Engine e2("V8");
	Car newcar("Toyota","Cruiser",e2);
	newcar.display();
	
	
	
	return 0;
}
