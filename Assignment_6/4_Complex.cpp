// Write a C++ program for addition of two complex numbers using friend function (use constructor function to 
// initialize data members of complex class). (Completed and checked)

#include <iostream>
using namespace std;

class complex
{
private:
    float real;
    float imag;

public:
    complex(float a, float b);
    void disp();
    friend complex sum(complex c, complex d);
};

complex::complex(float a, float b)
{
    real = a;
    imag = b;
}

void complex::disp()
{
    cout << real << " + i(" << imag << ")";
}

complex sum(complex a, complex b)
{
    float x, y;
    x = a.real + b.real;
    y = a.imag + b.imag;
    complex d(x,y);
    return d;
}

int main()
{
    float a, b;
    cout << "Enter the first complex number: "
         << "\nReal part: ";
    cin >> a;
    cout << "Imaginary part: ";
    cin >> b;
    complex c1(a,b);
    cout << "\nEnter the second complex number: "
         << "\nReal part: ";
    cin >> a;
    cout << "Imaginary part: ";
    cin >> b;
    complex c2(a,b);
    complex c3 = sum(c1,c2);
    cout << "\nThe first complex number is: ";
    c1.disp();
    cout << "\nThe second complex number is: ";
    c2.disp();
    cout << "\nThe sum of the complex numbers is: ";
    c3.disp();
}