#include<iostream>
#include<fstream>
using namespace std;
void read()
{
	ifstream output("OUT.txt");
	char ch;
	int count = 0;
	while(!output.eof())
	{
		output.get(ch);
		if(isalpha(ch))
		{
			count ++;
		}
	}
	cout<<"number of alphabets in file are "<<count;
	output.close();
}
int main()
{
	char data[100];
	cin.getline(data,100);
	
	ofstream demofile("OUT.txt");
	demofile<<data;
	

	read();
}
