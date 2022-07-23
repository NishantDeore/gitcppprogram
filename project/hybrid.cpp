#include<iostream>
using namespace std;
class student
{
	protected:
		int rollno;
	public:
		void accept()
		{
			cout<<"\n enter roll no= ";
			cin>>rollno;
		}
};
class test:public student
{
	protected:
		int part1,part2;
	public:
		void get()
		{
			cout<<"\n enter part1= ";
			cin>>part1;
			cout<<"\n enter part2= ";
			cin>>part2;
		}
};
class sport
{
	protected:
		int score;
	public:
		void input()
		{
			cout<<"\n enter score= ";
			cin>>score;
		}
};
class result:public test,public sport
{
	protected:
		int total;
	public:
		void insert()
		{
			cout<<"\n total= "<<score+part1+part2;
		}
		void display()
		{
			cout<<"\n roll no= "<<rollno;
			cout<<"\n part1= "<<part1;
			cout<<"\n part2= "<<part2;
			cout<<"\n score= "<<score;
		}
};
main()
{
	result r;
	r.accept();
	r.get();
	r.input();
	r.insert();
	r.display();
}
