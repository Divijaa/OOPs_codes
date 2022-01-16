#include<iostream>
using namespace std;
class num{
	int a;
	int b;
	
	public:
		void get()
		{
			cin>>a>>b;
		}
		
		friend void swapping(num ob);
};
void swapping(num ob)
{
	int temp = ob.a;
	ob.a= ob.b;
	ob.b= temp;
	
	cout<<ob.a<<" "<<ob.b;
}
int main()
{
	num obj;
	obj.get();
	swapping(obj);
}
