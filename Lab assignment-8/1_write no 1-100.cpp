#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream datafile;
	datafile.open("NOTES.txt", ios::out);
	if (!datafile)
	{
		cout<<"Error opening file"<<endl;
		
	}
	else
	{
		cout<<"File opened successfully";
	}
   int i;
 	for (i=1;i<=100;i++)
 	{
 		datafile<<i<<endl;
 	}
	 datafile.close();
	 return 0;
}
