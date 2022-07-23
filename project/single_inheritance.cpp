#include<iostream>
using namespace std;
class student
{
	protected:
		int rollno;
		char name[20];
		float marks;
	public:
		void accept()
		{
			cout<<"\n enter roll no= ";
			cin>>rollno;
			cout<<"\n enter name= ";
			cin>>name;
			cout<<"\n enter marks= ";
			cin>>marks;
		}
};
class library: public student
{
	private:
		int id;
		char bname[20];
	public:
		void get()
		{
			cout<<"\n enter id= ";
			cin>>id;
			cout<<"\n enter name= ";
			cin>>bname;
		}
		void display()
		{
			cout<<"\n roll no ="<<rollno;
			cout<<"\n name= "<<name;
			cout<<"\n marks= "<<marks;
			cout<<"\n id= "<<id;
			cout<<"\n name= "<<bname;
		}
};
main()
{
	library l;
	l.accept();
	l.get();
	l.display();
}
