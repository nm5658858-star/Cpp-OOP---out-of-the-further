#include<iostream>
using namespace std;
class time{
	int hours, min;
	public:
		void take(){
			cout<<"Enter hours : ";
			cin>>hours;
			cout<<"Enter minutes : ";
			cin>>min;
		}
		void display(){
			cout<<"Hours are: "<<hours<<" and minutes are: "<<min<<endl;
		}
		void sum(time t1, time t2){
			hours = (t1.min + t2.min) / 60;
			min = (t1.min + t2.min) % 60;
			hours = hours + (t1.hours + t2.hours);
		}
		
};

int main(){
	
	time t1,t2,t3;
	t1.take();
	t2.take();
	t3.sum(t1,t2);
	t1.display();
	t2.display();
	t3.display();
		
	return 0;
}
