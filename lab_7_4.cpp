#include<iostream>
using namespace std;
class Shape
{
		public:
			double height,base;
	
	//constructor to assign initial values to height and base
	Shape()
	{
		height=0;
		base=0;
	}
	
	//declaration of virtual function display_area()
	virtual void display_area() = 0;
};

//class triangle inheriting class Shape
class Triangle : public Shape
{
	public:
	 Triangle(int h , int b)
	{
		height=h;
		base=b;
	}
	
	//redefining function display_area()
		void display_area()
		{
		cout<<height;
		cout<<"\nArea of Triangle = "<<(height*base)/2;
		}
};

//class Rectangle inheriting class Shape
class Rectangle : public Shape
	{
	public:
	Rectangle(int h , int b)
	{
		height=h;
		base=b;
	}
		
		//redefining function display_area()
		void display_area()
		{
		cout<<"\nArea of Rectangle = "<<height*base;
		}
};
int main()
{
	
	Rectangle r(4,5);
	r.display_area();
	Triangle t(3,4);
	t.display_area();
}
