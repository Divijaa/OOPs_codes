#include <iostream>
using namespace std;
void rethrow()
{
   try
   {
       throw "hello";
   }
   catch (const char*)
   {
   cout <<"Caught exception inside rethrow function"<<endl;
   throw; //rethrow char* out of function
   }
}
int main()
{
   cout<< "started"<<endl;
   try
   {
      rethrow();
   }
   catch(const char*)
   {
      cout <<"Caught exception inside Main\n";
   }
       cout << "end";
}
