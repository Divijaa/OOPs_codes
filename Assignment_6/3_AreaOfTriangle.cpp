// Write a C++ program to compute area of right angle triangle, equilateral triangle, isosceles triangle using function 
// overloading concept. (Completed and checked)

#include<iostream>
#include<math.h>
using namespace std;

float area(float side);
float area(float base, float height);
float area(float a, float b, float c);

int main()
{
    int a;
    cout << "1. Equilateral Triangle"
         << "\n2. Right-angled Triangle"
         << "\n3. Isosceles Triangle"
         << "\nEnter the type of triangle: ";
    cin >> a;
    switch(a)
    {
        case 1: 
            float s;
            cout << "Enter the side of the triangle: ";
            cin >> s;
            cout << "The area of the triangle is:"
                 << area(s);
            break;
        case 2: 
            float b,h;
            cout << "Enter the base of the triangle: ";
            cin >> b;
            cout << "Enter the height of the triangle: ";
            cin >> h;
            cout << "The area of the triangle is:"
                 << area(b,h);
            break;
        case 3:
            float s1,s2,s3;
            cout << "Enter the first side of the triangle: ";
            cin >> s1;
            cout << "Enter the second side of the triangle: ";
            cin >> s2;
            cout << "Enter the third side of the triangle: ";
            cin >> s3;
            cout << "The area of the triangle is: "
                 << area(s1,s2,s3);
            break;
        default:
            cout << "Invalid entry!";
    }
}

float area(float side)
{
    return ((1.732 * side *side) / 4);
}

float area(float base, float height)
{
    return (0.5 * base * height);
}

float area(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    float ar = s * (s - a) * (s - b) * (s - c);
    ar = pow(ar,0.5);
    return ar;
}