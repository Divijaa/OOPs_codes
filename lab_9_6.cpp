#include<iostream>
#include<string>
using namespace std;
int main()
{
	string user_name,password;
	cout<<"username:";
	getline(cin,user_name);
	cout<<"\nPassword";
	getline(cin,password);
	
	
	try{
		if(password.length() < 6)
		 throw 0;
		 
		 int count =0 ;
		 for(int i = 0 ;i <password.length();i++)
		 {
		 	if(isdigit(password[i]))
		 	{
		 		count ++;
			}
		 }
		 if(count == 0)
		 {
		 	throw 0 ;
		 }
		 else{
		 	cout<<"password is correct";
		 }
	}
	catch(int a)
	{
		cout<<"invalid password format!";
	}
}
