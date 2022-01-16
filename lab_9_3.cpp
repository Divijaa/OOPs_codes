#include<iostream>
#include<string>
using namespace std;

int main()
{
     float x, y, result;
     char Operator;
     
     cout<<"Arithmetic Operations"<<endl;
     try
     {
          cout<<"Enter First Number: "<< endl;
          cin>>x;
          if(x==0)
               throw 0;
          cout<<"Enter Operator:  ";
          cin>>Operator;
          if(Operator != '+' && Operator != '-' && Operator != '*' && Operator != '/')
          throw Operator;
          cout<<"Enter Second Number  :  "<<endl;
          cin>>y;
          
          switch(Operator)
          {
               case '+':
                    result = x + y;
                    break;
               case '-':
                    result = x - y;
                    break;
                     case '*':
                    result = x * y;
                    break;
               case '/':
                    result = x / y;
                    break;
          }
          if(y == 0) //finding if the denominator is 0
               throw 0;
          cout<<"\n result: "<<x<<" "<<Operator<<" "<<y<<" = "<<result;
     }
     catch(const char c)
     {
          cout<<c<<" is not a Valid Operator";
     }
     catch(const int n)
     {
          cout<<"Please enter a valid number.";
          
           }
     return 0;
}
