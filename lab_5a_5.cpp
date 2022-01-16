#include<iostream>
using namespace std;
class Distance{
	int meter;
	public:
		Distance(): meter(0){} //constructor,initializong meter value to 0
		
		friend int addFive(Distance);	
};
int addFive(Distance obj)
{
	obj.meter +=5;
	return obj.meter;
}
int main()
{
	Distance ob;
	cout<<addFive(ob);
}
