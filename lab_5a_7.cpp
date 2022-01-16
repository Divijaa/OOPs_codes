#include<iostream>
using namespace std;
class B;
class A{
	
	public:
		int a;
		int b;
	
	    void get(){
	    	cin>>a>>b;
		}
		//any member of B can access data of A
		friend class B;
};
class B{
	public:
	
		int add(A x)
		{
			cout<<x.a<<" "<<x.b<<endl;
			return x.a+x.b;
		}
	
};

int main()
{
	A ob;
	ob.get();
	B ob1;
	cout<<ob1.add(ob);
}
