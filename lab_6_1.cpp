#include<iostream>
using namespace std;
class mat{
	public:
	int n,m;
	int arr[n][m];
	
	mat(int r,int c)
	{
		n=r;
		m=c;
	}
	
	void getdata()
	{
		for(int i =0 ;i <n;i++)
		{
			for(int j = 0; j<m ; j++)
			{
				cin>>arr[i][j];
			}
		}
	}
	void show()
	{
		for(int i =0 ;i <n;i++)
		{
			for(int j = 0; j<m ; j++)
			{
				cout<<arr[i][j];
			}
		}
	}
	void mul( mat obj1 , mat obj2)
	{
		mat res(n,m);
		for(int i =0 ;i <n;i++)
		{
			for(int j = 0; j<m ; j++)
			{
				res.arr[i][j] = obj1.arr[i][j] * obj2.arr[i][j];
			}
		}
		
	}
};
int main()
{
	mat obj1;
	obj1(2,2);
	obj1.getdata();
	obj1.show();
}
