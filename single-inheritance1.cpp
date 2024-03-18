// Q> WAP to add two numbers using single inheritance.

#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		void getdata()
		{
			cout<<"Enter first number: ";
			cin>>a;
		}
};
class B: public A
{
	int c,b;
	public:
		void getdata1()
		{
			cout<<"Enter second number: ";
			cin>>b;
		}
		void show1()
		{
			c=a+b;
			cout<<"Sum of two numbers: "<<c;	
		}
};


int main()
{
	B x;
	x.getdata();
	x.getdata1();
	x.show1();
	return 0;
}
