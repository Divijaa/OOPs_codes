#include<iostream>
using namespace std;
//static are defined in class, requires global defination
//static data member- smae value is used throughout the function
class myclass{
	static int a;
	int b;
	public:
		static int c;
		void set(int i , int j)
		{
			a++;
			b=i;
			c=j;
		}
		void get()
		{
			cout<<"static a:"<<a<<"non-static b:"<<b<<"static c:"<<c<<endl;
			
		}
};
int myclass ::a =10;
int myclass ::c;
int main()
{
	cout<<"Public static c:"<<myclass::c<<endl;
	myclass m1,m2;
	m1.set(1,2);
	m2.set(3,4);
	m1.get();
	m2.get();
	
}
