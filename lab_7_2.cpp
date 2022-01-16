#include<bits/stdc++.h>
#include<string>
using namespace std;
class student{
	
	public:
		string name;
	    int roll_no;
		get_data()
		{
			cout<<"enter your name:";
			getline(cin>>ws ,name);
			cout<<"enter your roll number:";
			cin>>roll_no;
			cin.ignore();
		}
};
class exam : public student{
	public:
		int marks[5];
		get_marks()
		{
			get_data();
			cout<<"enter the marks scored in various subjects"<<endl;
			for(int i =0;i<5;i++)
			{
				cout<<"Scores in subject "<<i+1<<endl;
				cin>>marks[i];
			}
		}
};
class result : public exam{
	int av;
	int to;
	public:
		get_result()
		{
			
			to =0;
			av=0;
			for(int i =0;i<5;i++)
			{
			
				to+=marks[i];
			}
			
			av=to/5;
			display();
		}
		display()
		{
			cout<<"The average marks of "<< name <<" is "<<av;
		}
	
};
int main()
{
	result s1;
	s1.get_marks();
	s1.get_result();
	
	result s2;
	s2.get_marks();
	s2.get_result();
	
	
	
}
