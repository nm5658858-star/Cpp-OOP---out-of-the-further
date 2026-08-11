#include<iostream>
using namespace std;
class Fan{
	protected:
		bool power;
	public:
		Fan(){
			power = false;
		}
		Fan(bool a){
			power = a;
		}
		~Fan(){}
		void on(){
			power = true;
		}
		void off(){
			power = false;
		}
		void printstatus(){
			if(power == true){
				cout<<"Fan is on\n";
			}
			else{
				cout<<"Fan is off\n";
			}
		}
};
class SFan:public Fan{
	private:
		int speed;
	public:
		
		SFan():speed(1){
			
		}
		SFan(int s):speed(s){
			
		}
		SFan(bool p, int q):Fan(p),speed(q){
			
		}
		~SFan(){
		
		}
		void speedinc(){
			if(speed<3){
				speed++;
			}
			else{
				cout<<"Max speed\n";
			}
		}
		void speeddec(){
			if(speed>1){
				speed--;
			}
			else{
				cout<<"Min speed\n";
			}
		}
		void printspeed(){
			string slevel;
			switch(speed){
				case 1:
					slevel = "LOW";
					break;
				case 2:
					slevel = "medium";
					break;
				case 3:
					slevel = "High";
					break;
				default:
					cout<<"Unknown";
			}
			cout<<"Speed is: "<<slevel<<endl;
		}
};

int main(){
	Fan f1;
	f1.printstatus();
	SFan f2;
	f2.printspeed();
	
	return 0;
}
