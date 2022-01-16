#include<iostream>
#include<string>
using namespace std;
class Publication
{
	public:
		string title;
		float price;
		get_data()
		{
			cout<<"enter the title:";
			//cin.ignore();
			getline(cin>>ws,title);
			
			cout<<"enter the price:";
			cin>>price;
		}
		
};
class book : public Publication
{
	public:
		int page_count;
		get_data_b()
		{
			get_data();
			cout<<"enter the page count:";
			cin>>page_count;
		}
		put_data_b()
		{
			cout<<"THE TITLE OF THE BOOK IS: "<<title<<endl<<"THE PRICE OF THE GIVEN BOOK IS: "<<price<<endl;
			cout<<"IT HAS "<<page_count<<" PAGES."<<endl;
		}
};
class tape: public Publication
{
	public:
		float play_time;
		get_data_t()
		{
			get_data();
			cout<<"enter the play_time";
			cin>>play_time;
		}
		put_data_t()
		{
			cout<<"THE TITLE OF THE TAPE IS: "<<title<<endl<<"THE PRICE OF THE GIVEN TAPE IS: "<<price<<endl;
			cout<<"IT HAS A PLAY TIME OF "<<play_time<<" MINUTES.";
		}
};
int main()
{
	book b1;
	tape t1;
	

	b1.get_data_b();
	b1.put_data_b();
	

	t1.get_data_t();
	t1.put_data_t();
	
}
