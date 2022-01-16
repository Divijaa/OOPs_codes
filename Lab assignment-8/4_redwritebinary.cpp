#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Student{
    string name;
    int roll;
    double marks;
    public:

        void getStudent(){
            cout<<"enter name"<<endl;
            cin >> name;
            cout << "enter roll" << endl;
            cin >> roll;
            cout << "enter marks" << endl;
            cin>>marks;
        }

        void showStudent(){
            cout<<"name: "<<name<<endl;
        }
};

int main(){
    Student s1;
    s1.getStudent();
    fstream fio;
    fio.open("binary.txt", ios::trunc | ios::out | ios::binary);
    fio.write((char*)&s1, sizeof(s1));

    fio.open("binary.txt", ios::in | ios::binary);
    fio.read((char*)&s1, sizeof(s1));

    s1.showStudent();

}
