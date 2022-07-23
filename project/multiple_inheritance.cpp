#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	public:
		void accept()
		{
			cout<<"\n enter x= ";
			cin>>x;
		}
};
class B:public A
{
	protected:
		int y;
	public:
		void get()
		{
			cout<<"\n enter y= ";
			cin>>y;
		}
};
class C:public B
{
	protected:
		int z;
	public:
		void input()
		{
			cout<<"\n enter z= ";
			cin>>z;
		}
		void display()
		{
			cout<<"\nproduct= "<<x*y*z;
		}
};
main()
{
	C b;
	b.accept();
	b.get();
	b.input();
	b.display();
}
