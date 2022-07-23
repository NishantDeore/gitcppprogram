#include<iostream>
using namespace std;
class hospital
{
	protected:
		string bname,haddr;
		long long contact;
	public:
		void accept()
		{
			cout<<"\n enter name= ";
			cin>>bname;
			cout<<"\n enter address= ";
			cin>>haddr;
			cout<<"\n enter contact= ";
			cin>>contact;
		}
};
class patient:public hospital
{
	protected:
		int id;
		string pname,pward;
	public:
		void get()
		{
			cout<<"\n enter id= ";
			cin>>id;
			cout<<"\n name= ";
			cin>>pname;
			cout<<"\n enter ward name= ";
			cin>>pward;
		}
};
class bill:public patient
{
	protected:
		int date,amount;
	public:
		void input()
		{
			cout<<"\n enter date= ";
			cin>>date;
			cout<<"\n amount= ";
			cin>>amount;
		}
		void display()
		{
			cout<<"\n name= "<<bname;
			cout<<"\n address= "<<haddr;
			cout<<"\n contact= "<<contact;
			cout<<"\n id= "<<id;
			cout<<"\n name= "<<pname;
			cout<<"\n ward name= "<<pward;
			cout<<"\n date= "<<date;
			cout<<"\n amount= "<<amount;
		}
};
main()
{
	bill b;
	b.accept();
	b.get();
	b.input();
	b.display();
}
