#include<iostream>
using namespace std;
class rectangle{
	public:
		float length, width;
		
		void setLenght(float l)
		{
			length = l;
		}
		void setWidth(float w)
		{
			width = w;
		}
		float perimeter()
		{
			
			return 2*length*width ;
		}
		float area()
		{
			
			return length*width;
		}
		void show()
		{
			cout<<"length:"<<length<<endl;
			cout<<"width:"<<width<<endl;
		}
		int sameArea(rectangle r2)
		{
			if(area() == r2.area())
			return 1;
			else
			return 0;
		}
};
int main()
{
	rectangle r1,r2;
	r1.setLenght(5);
	r1.setWidth(2.5);
	
	r2.setLenght(5);
	r2.setWidth(18.9);
	
	r1.show();
	r2.show();
	cout<<"AREA: ";
	cout<<r1.area();
	cout<<"PERI: ";
	cout<<r1.perimeter();
	cout<<endl;
	cout<<"AREA: ";
	cout<<r2.area();
	cout<<"PERI: ";
	cout<<r2.perimeter();
	
	cout<<endl;
	cout<<r1.sameArea(r2);
}
