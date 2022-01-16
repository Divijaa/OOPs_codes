#include<iostream>
#include<string.h>
using namespace std;

class conditions
{ public:
	 char vehicle;
	 int salary,age;
	 string city_name;
	 
	  conditions()
	  {
	   age=0;
	   vehicle=0;  
	   salary=0;
	   
	  }
	
	  void getdata(){
	  cout<<"What is your age: ";
	  cin>>age;
	  if(age<18 || age>55) { throw 1; }
	 
	 cout<<"What is your Salary Permonth: ";
	 cin>>salary;
	 if(salary<50000 || salary>100000){ throw 2;}
	
	 cout<<"Do u have four wheeler(yes/no):  ";
	 cin>>vehicle;
	 if(vehicle=='n'){ throw 3; }
	 
	 cout<<"What is the name of your city:";
	 cin>>city_name;
	 if(city_name=="pune" || city_name=="mumbai" || city_name=="bangalore" || city_name=="chennai")
	 {}
	 else {throw 4;}
  }
};

int main()
{
 conditions u;
 try
 {
  u.getdata();
  
 }

 catch(int i)
 {
  switch(i)
  {
   case 1:
    cout<<"Please enter age between(18-55)"<<endl;break;

   case 2:
    cout<<"Please enter salary between(50000-100000)"<<endl;break;

   case 3:
    cout<<"User Donot have four vehicle"<<endl;break;
 
   case 4:
    cout<<"Invalid city_name"<<endl;break; 
  }
 }
 return 0;
} 

