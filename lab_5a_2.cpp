#include<iostream>
using namespace std;
class myclass
 {
 	    int a;
		int b;
		
	public:
		
		void get()
		{
			cout<<"enter the first value:";
			cin>>a;
			cout<<"enter the second value:";
			cin>>b;
		}
		
		friend int find(myclass ob);
};
int find(myclass ob)
{
	return ob.a >= ob.b?ob.a:ob.b;
}
int main()
{
	myclass ob1;
	ob1.get();
	cout<<find(ob1);
}
