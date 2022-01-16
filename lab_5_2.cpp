#include<iostream>
#include<string>
using namespace std;
class student{
	char name[20];
	int roll_no,age,cl;
	
	public:
		void getdata();
		void displaydata();
};
void student::getdata()
{
	cin>>name;
	cin>>roll_no>>age>>cl;

}
void student::displaydata()
{
	cout<<name<<" "<<roll_no<<" "<<cl<<" "<<age;
	cout<<endl;
}
int main()
{
	int n;
	cout<<"enter the number of students";
	cin>>n;
	student s1[n];
	for(int i =0;i<n;i++)
	{
		s1[i].getdata();
	}
	for(int i =0;i<n;i++)
	{
		s1[i].displaydata();
	}
}
