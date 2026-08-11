#include<iostream>
using namespace std;
class Fan{
	private:
		bool power;
	public:
		Fan(){
			power = false;
		}
		Fan(bool p):power(p){
			
		}
		~Fan(){
			
		}
		void on(){
			power = true;
		}
		void off(){
			power = false;
		}
		void printstatus(){
			if(power == true)
				cout<<"Power is ON\n";
			else
				cout<<"Power is off\n";
		}
};

class SFan:public Fan{
	private:
		int speed;
	public:
		SFan(){
			speed = 1;
		}
		SFan(bool p):Fan(p),speed(1){
//			speed = 1;
		}
		SFan(bool p,int s):Fan(p){
			speed = s;
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

class RSFan:public SFan{
	private:
		bool rotate;
	public:
		RSFan(){
			rotate = false;
		}
		RSFan(bool p, int s, bool r):SFan(p,s),rotate(r){
//			rotate = r;
		}
		~RSFan(){
			
		}
		void rotateOn(){
			rotate = true;
		}
		void rotateOff(){
			rotate = false;
		}
		void printrotate(){
			if(rotate == true)
				cout<<"Rotate is ON "<<endl;
			else
				cout<<"Rotate is OFF"<<endl;
		}
};
int main(){
	Fan f1(false);
	Fan f2(true);
	Fan f3(true);
	f1.printstatus();
	f2.printstatus();
	f3.printstatus();
	f1.on();
	f3.off();
	f1.printstatus();
	f2.printstatus();
	f3.printstatus();
	//Sfan		*****************
	SFan sf1(true,1);
	SFan sf2(false,2);
	SFan sf3(false,1);
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
	//RSFan		*****************
//	create four object of RSFan: RSF1, RSF2, RSF3 and RSF4 with the following states:
//RSF1 = ON, low speed, rotation off
//RSF2 = OFF, low speed, rotation off
//RSF3 = ON, med speed, rotation on
//RSF4 = ON, High speed, rotation on
//Turn OFF RSF1 and turn its rotation ON, increase speed of RSF2 once
//Decrease speed of RSF3 twice and turn its rotation OFF
//Turn rotation of RSF4 OFF and power it OFF
//Print complete details of (power, speed and rotation) RSF1, RSF2, RSF3 and RSF4 on screen
	RSFan rsf1(true,1,false);
	RSFan rsf2(false,1,false);
	RSFan rsf3(true,2,true);
	RSFan rsf4(true,3,true);
	rsf1.off();
	rsf1.rotateOn();
	rsf2.incspeed();
	rsf3.decspeed();
	rsf3.decspeed();
	rsf3.rotateOff();
	rsf4.rotateOff();
	rsf4.off();
	rsf1.printstatus();  //fan is on
	rsf1.printspeed();
	rsf1.printrotate();
	rsf2.printstatus();
	rsf2.printspeed();
	rsf2.printrotate();
	rsf3.printstatus();
	rsf3.printspeed();
	rsf3.printrotate();
	rsf4.printstatus();
	rsf4.printspeed();
	rsf4.printrotate();
	return 0;
}



