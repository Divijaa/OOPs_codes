// Write a program for overloading of Unary ++ operator. (Completed and checked)

#include<iostream>
using namespace std;

class integer
{
    private:
        int a;
    public:
    void getdata();
    void putdata();
    friend void operator ++ (integer &i);
};

void integer::getdata()
{
    cout << "Enter the integer: ";
    cin >> a;
}

void integer::putdata()
{
    cout << "The integer is: " << a;
}

void operator ++ (integer &i)
{
    i.a++;
    i.a++;
}

int main()
{
    integer x;
    x.getdata();
    operator++(x);
    x.putdata();
}