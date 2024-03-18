// A derived class with only one base class is kanown as single inheritance.

#include<iostream>
using namespace std;

class A
{
	int a;
	public: 
	void getdata()
	{
		cout<<"enter the first number: ";
		cin>>a;
	}
	void show()
	{
		cout<<"a= "<<a<<endl;
	}
}; 

class B: public A
{
	int b;
	public:
	void getdata1()
	{
		cout<<"enter second number: ";
		cin>>b;
	}
	void show1()
	{
		cout<<"b= "<<b;
	}
};

int main()
{
	B x;
	x.getdata();
	x.show();
	x.getdata1();
	x.show1();
	return 0;
}
