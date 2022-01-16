#include<iostream>
using namespace std;
class Student{
	int age,standard;
    string first_name;
    string last_name;
    public:
    	void get_data(int age1,int standard1,string first_name1,string last_name1){
    		age=age1;
    		standard=standard1;
    		first_name=first_name1;
    		last_name=last_name1;
		}
		void set_data()
		{
			cout<<"AGE:"<<age<<endl<<"STANDARD:"<<standard<<endl<<"NAME:"<<first_name<<" "<<last_name;
		}
};
int main()
{
	int age,standard;
	string first_name,last_name;
	
	cin >> age >> standard >> first_name >> last_name ;
	
	Student st;
	st.get_data(age,standard,first_name,last_name);
	
	st.set_data();
}
