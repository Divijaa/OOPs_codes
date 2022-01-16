#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream datafile;
	datafile.open("aa.txt" , ios::out);
	
	for(int i =0 ;i < 101 ;i++)
	{
		datafile<<i<<" ";
	}
}

