#include<iostream>
using namespace std;
class bank{
	public:
		string name,type;
		int num,bal;
		
		void set_ini_vals()
		{
			cout<<"Name of the depositor:";
			cin>>name;
			cout<<"Account Number:";
			cin>>num;
			cout<<"Account type:";
			cin>>type;
			cout<<"Balance";
			cin>>bal;
			display_det();
			
		}
		void display_det()
		{
			cout<<name<<"\n"<<num<<"\n"<<type<<"\n"<<bal<<"\n";
		}
		void dep_amount(int amount)
		{
		
			bal=bal+amount;
			
				cout<<bal;
		}
		void withdraw_amount(int amount)
		{
				if(amount <= bal)
				{
					bal=bal-amount;
				}
				else
				{
					cout<<"balance is less than the required amount.";
				}
				
					cout<<bal;
		}
		
};

int main()
{
	bank p1;
	p1.set_ini_vals();
	p1.dep_amount(200);
	p1.withdraw_amount(300);

}
