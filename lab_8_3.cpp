#include <iostream>
#include <fstream>
using namespace std;
 

int main()
{
	
    ifstream ini_file ("sample69.txt");
    
    ofstream out_file ("copy.txt"); 
    
    char ch;
    
    while(!ini_file.eof())
    {
        ini_file.get(ch);
        out_file << ch;
    }

    ini_file.close();
    out_file.close();
    return 0;
}
