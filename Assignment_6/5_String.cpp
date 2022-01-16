// Define a class string and overload = = to compare two strings and + operator for concatenation of two strings. (Completed and checked)

#include<iostream>
#include<string.h>
using namespace std;

class String
{
    private:
        char str[100];
    public:
        void getdata();
        void putdata();
        friend bool operator ==(String s1, String s2);
        friend String operator +(String s1, String s2);
};

void String::getdata()
{
    cout << "\n\nEnter the string: ";
    gets(str);
}

void String::putdata()
{
    cout << "The string is: ";
    puts(str);
}

bool operator == (String s1, String s2)
{
    return (!strcmp(s1.str,s2.str));
}

String operator +(String s1, String s2)
{
    String s;
    int a,b;
    for (int i = 0 ; i < strlen(s1.str) ; i++)
    {
        s.str[i] = s1.str[i];
        a = i;
    }
    for (int i = 0 ; i < strlen(s2.str) ; i++)
    {
        s.str[a + i + 1] = s2.str[i];
        b = i;
    }
    a = a + b + 2;
    s.str[a] = '\0';
    return s;
}

int main()
{
    String s1,s2,s3,s4;
    s1.getdata();
    s1.putdata();
    s3.getdata();
    s3.putdata();
    s4 = s1 + s3;
    cout << "The strings are equal: " << (s1 == s2)
         << "\nConcatenation: \n";
    s4.putdata();
}
