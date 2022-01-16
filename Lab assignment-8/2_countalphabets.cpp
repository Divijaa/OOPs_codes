#include<iostream>
#include<fstream>
using namespace std;

int count_alphabets()
{
	fstream datafile; 
	char ch;
	datafile.open("OUT.txt", ios::in);
	if (!datafile)
	{
		cout<<"Error opening file"<<endl;
		
	}
	else
	{
		cout<<"File opened successfully"<<endl;
	}
	
	datafile.get(ch);
	int c=0;
	while (!datafile.eof())
	{
		cout << ch ;
		datafile.get(ch);
		 
		c++;
	}
	cout<<"\nCount of alphabets = "<<c;
	datafile.close();
	return 0;
}

int main()
{
	count_alphabets();
}
