//Derived class constructor in Multilevel inheritance.
#include<iostream>
using namespace std;
class A
{
	public: int x;
	A(int i)
	{
		x=i;
	}
	void show()
	{
		cout<<"x="<<x<<"\n";
	}
};

class B: public A
{
	int y;
	public: B(int j, int i): A(i)
	{
		y=j;
	}
	void show1()
	{
		cout<<"y="<<y<<"\n";
	}
};

class C: public B
{
	int m,n;
	public: C(int a, int b, int c, int d): B(a,b)
	{
		m=c;
		n=d;
	}
	void show2()
	{
		cout<<"m="<<m<<"\n"<<"n="<<n;
	}
};

int main()
{
	C z(5,6,7,8);
	z.show();
	z.show1();
	z.show2();
	return 0;
}

