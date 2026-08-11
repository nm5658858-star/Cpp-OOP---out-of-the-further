#include <iostream>
using namespace std;
int main(){
	
	enum Meal {
		breakfast,
		lunch,
		dinner,
		bahirse
	};
	
	Meal m1 = breakfast;
	
	cout<<m1<<endl;
	cout<<breakfast<<endl;
	cout<<lunch<<endl;
	cout<<dinner<<endl;
	
	Meal m4 = bahirse;
	cout<<m4<<endl;

	return 0;
}
	
