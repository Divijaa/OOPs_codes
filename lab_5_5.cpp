#include<iostream>
using namespace std;
class myclass{
	int code;
	static int count;
	
	public:
		myclass()
		{
			code = ++count;
		}
		
		void showcode()
		{
			cout<<"\n\tObject number is :"<<code;
		}
		//static member function can only access static data members and funcs
		static void showcount()
		{
		cout<<"\n\tCount Objects :"<<count;
		}
};
int myclass::count;
int main()
{
	myclass obj1,obj2;
	//use scope resolution to call static member func
	obj1.showcount();
	obj1.showcode();
	obj2.showcount();
	obj2.showcode();
}
