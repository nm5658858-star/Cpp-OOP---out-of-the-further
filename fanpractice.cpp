#include<iostream>
using namespace std;
class fan{
	private:
		bool state;
	public:
		fan(){
			state = false;
		}
		fan(bool s):state(s){
			
		}
		~fan(){
			
		}
		void off(){
			state = false;
		}
		void on(){
			state = true;
		}
		void printstatus(){
			if(state == true) cout<<"ON\n";
			else cout<<"OFF\n";
		}
};
class sfan:public fan{
	private:
		int speed;
	public:
		sfan(){
			speed = 1;
		}
		sfan(bool p):fan(p){
			speed = 1;
		}
		sfan(bool p, int sp):fan(p),speed(sp){
			
		}
		~sfan(){
			
		}
		void incspeed(){
			speed++;
		}
		void decspeed(){
			speed--;
		}
		void printspeed(){
			cout<<"Speed is: "<<speed<<endl;
		}
};

class rsfan:public sfan{
	private:
		int rot;
	public:
		rsfan(){
			rot = false;
		}
		rsfan(bool s, int sp, bool r):sfan(s,sp),rot(r){
			
		}
		~rsfan(){
			
		}
		rotOff(){
			rot = false;
		}
		rotOn(){
			rot = true;
		}
		void printrot(){
			if(rot == true) cout<<"Rotation is ON";
			else cout<<"Rotation is OFF";
		}
};

int main(){
	fan f1(false);
	fan f2(true);
	fan f3(true);
	f1.printstatus();
	f2.printstatus();
	f3.printstatus();
	f1.on();
	f3.off();
	f1.printstatus();
	f2.printstatus();
	f3.printstatus();
	cout<<"For SFan\n";
	sfan sf1(true,1);
	sfan sf2(false,2);
	sfan sf3(false,1);
	sf1.printspeed();
	sf1.printstatus();
	sf2.printspeed();
	sf2.printstatus();
	sf3.printspeed();
	sf3.printstatus();
	sf1.off();
	sf1.decspeed();
	sf2.off();
	sf2.incspeed();
	sf2.incspeed();
	sf3.incspeed();
	sf1.printspeed();
	sf1.printstatus();
	sf2.printspeed();
	sf2.printstatus();
	sf3.printspeed();
	sf3.printstatus();
	
	
	return 0;
}
