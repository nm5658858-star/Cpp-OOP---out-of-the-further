#include<iostream>
using namespace std;
int main(){
	
   	
	int press,cash,total_amount,old_password,new_password;
	
//	cout<<"Enter key:";
//	cin>>key;
	cout<<"Enter 1 to check balance: \n Press 2 to withdraw cash \n Press 3 to check deposit \n Press 4 to change password \n Enter 5 to exit\n";
	cin>>press;
	if(press == 1){
		cout<<"Enter total amount:";
		cin>>total_amount;
		cout<<"Enter cash withdrawn:";
		cin>>cash;
		cout<<endl;
		cout<<"Balance is:"<<total_amount - cash<<endl;
	}
	else if(press == 2)
	{   cout<<"Enter desired cash:";
	    cin>>cash;
		cout<<"Cash withdrawn is Rs:"<<cash<<endl;
	}
	else if(press == 3)
	{   cout<<"Enter cash you want to deposit:";
	    cin>>cash;
        cout<<"Cash deposited is Rs: "<<cash + total_amount<<endl;
}
   else if(press == 4)
    {   cout<<"Enter current password:";
        cin>>old_password;
		cout<<"Enter new password:";
		cin>>new_password;
		cout<<"Your new password is:"<<new_password<<endl;
}
	else if (press == 5)
	{
		
}
   else
   cout<<"Invalid Input";
	
//	else if(day == 2)
//	cout<<"Today is Tuesday\n";	
//	else if(day == 3)
//	cout<<"Today is Wednesday\n";
//	else if(day == 4)
//	cout<<"Today is Thursday\n";
//	else if(day == 5)
//	cout<<"Today is Friday\n";
//	else if(day == 6)
//	cout<<"Today is Saturday\n";
//	else if(day == 7)
//	cout<<"Today is Sunday\n";
//	else
//	cout<<"Invalid Day_no.!";
	return 0;
	
}
