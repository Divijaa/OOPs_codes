#include<iostream>
using namespace std;

int main()
{
	int y;
	cout<<"Enter any value:";
	cin>>y;
	try{
			if(y==0)
			throw 5;
			else
			throw "you are right";
			cout<<y<<endl;
	}
	catch (int i){
		cout<<"caught i =" <<i<<endl;
	}
	catch (const char*e){
		cout<<e<<endl;
		
	}
}
