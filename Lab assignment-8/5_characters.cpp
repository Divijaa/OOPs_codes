#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	char string[80];
	cout<<"Enter a string: ";
	cin>>string;
	
	int len = strlen(string);
	cout<<endl;
	cout<<"Length of string: "<<len;
	fstream datafile;
	datafile.open("TEXT.txt",ios::in | ios::out);
	
	for(int i=0; i<len;i++)
	{
		datafile.put(string[i]);
		
	 } 
	datafile.seekg(0);
	char ch;
	cout<<endl;
	cout<<"String read from file: ";
	while(!datafile.eof())
	{
//		datafile.get(ch);
		datafile>>ch;
		cout<<ch<<endl;
	}
	
	return 0;
}
