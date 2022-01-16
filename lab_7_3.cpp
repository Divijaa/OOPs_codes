#include<iostream>
using namespace std;
class Shape
{
		public:
			double height,base;
	
	void get_data()
	{
		cout<<"\nEnter height and base to compute area :";
		cin>>height>>base;
	}
	
	//declaration of virtual function display_area()
	virtual void display_area()
	{
		
	}
};
class Triangle : public Shape
{
	public:
	
	//redefining function display_area()
		void display_area()
		{
		cout<<height;
		cout<<"\nArea of Triangle = "<<(height*base)/2;
		}
};

class Rectangle : public Shape
	{
	public:
		
		void display_area()
		{
		cout<<"\nArea of Rectangle = "<<height*base;
		}
};
int main()
{
	
	Rectangle r;
	r.get_data();
	r.display_area();
	Triangle t;
	t.get_data();
	t.display_area();
}
