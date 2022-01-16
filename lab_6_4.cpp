#include<iostream>

using namespace std;

class complex

{

	int real,imag;
	public:
		complex()
		{
			real = x;
			imag = y;
		}
		friend complex sum(complex,complex);
		void display();

};

void complex::display()
{
cout<<"the sum of complex num is"<<real<<"+i"<<imag;
}

complex sum(complex a,complex b)

{

	complex t;
	
	t.real=a.real+b.real;
	
	t.imag=a.imag+b.imag;
	
	return t;

}

int main()

{

complex a(1,2);
complex b(2,3);
complex a(0,0);

c=sum(a,b);

c.display();

return(0);

}
