#include<iostream>
#include<string>
using namespace std;
class emp
{ 
     char name[10];
//	string name;
	 int age;
	 public:
	 	
		void getData();
	    void putData();
 };
 
 void emp :: getData()
 { 
    cout << "Enter Name: "; 
//    getline(cin,name);
    cin >> name;
	cout << "Enter Age: "; 
	cin >> age; 
}
	
 void emp :: putData()
 { cout << "\tName: " << name << "\tAge: " << age << endl; }
 
 int main()
{ 
	int n;
	cin>>n;
	
	 emp manager[n];
	 
	 for (int i = 0; i < n; i++)
	 { 
	 		cout << "\nEnter details of manager " << i + 1 << endl;
	 		manager[i].getData();
	 }
	 for (int i = 0; i < n; i++)
	 { 	
	 		cout << "\nManager " << i + 1;
	 		manager[i].putData();
	 }
	 return 0;
 }

