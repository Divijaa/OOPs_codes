#include<iostream>
#include<vector>
using namespace std;

class  base
{
    int n;
    vector <int> v;

   public:
        void get()
        {
           cout<<"how many numbers?";
           cin>>n;
           
           cout<<"Enter the numbers:"<<endl;
           
           int a;
           for(int i =0;i<n;i++)
           {
           	cin>>a;
           	v.push_back(a);
		   }
        }

        friend float mean(base ob);
};

float mean(base ob)
{
	int sum=0;
	for(int i =0; i<ob.n;i++)
	{
		sum+= ob.v[i];
	}
   return sum/ob.n;
}

int main()
{


    base obj;
    obj.get();
    cout<<"\nMean value is :: "<<mean(obj)<<"\n";

    return 0;
}
