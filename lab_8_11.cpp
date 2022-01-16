#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream datafile;
	datafile.open("NOTES.TXT", ios::out);
	
	for(int i =0;i<=100;i++)
	{
		datafile <<i<<endl;
	}
}
