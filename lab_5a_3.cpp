#include<iostream>
#include<string>
using namespace std;
class student{
	string name;
	int roll_no,standard;
	char section;
	
	public:
		void get()
		{
			cout<<"enter the name:";
			getline(cin,name);
			cout<<"enter the roll no:";
			cin>>roll_no;
			cout<<"enter the class:";
			cin>>standard;
			cout<<"enter the section:";
			cin>>section;
		}
		
		friend void display(student obj);
};
void display(student obj)
{
	cout<<obj.name<<" "<<obj.roll_no<<" "<<obj.standard<<obj.section;
}
int main()
{
	student ob;
	ob.get();
	display(ob);
}
