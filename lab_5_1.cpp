#include<iostream>
using namespace std;
class student 
{
	char name [20];
	int roll_no; 
	int marks[6];
	public: 
	void getdata (); 
	void tot_marks (); 
	
} ;
void student ::getdata()
{
	cin>>name;
	cin>>roll_no;
	for(int i =0 ;i<6;i++)
	{
		cin>>marks[i];
	}
	tot_marks();
} 
void student::tot_marks()
{
	int sum =0;
	for(int i =0;i<6;i++)
	{
		sum+=marks[i];
	}
	cout<<"total marks :"<<sum;
}
int main()
{
	student s1;
	s1.getdata();
	
}
