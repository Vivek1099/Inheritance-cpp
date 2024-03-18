//Derived class constructor in Multiple inheritance.
#include<iostream>
using namespace std;
class A
{
	protected: int x;
	public: A(int i)
	{
		x=i;
	}
	void show()
	{
		cout<<"x="<<x<<"\n";
	}
};
class B
{
	float y;
	public: B(float j)
	{
		y=j;
	}
	void show1()
	{
		cout<<"y="<<y<<"\n";
	}	
};
class C: public A, public B
{
	int m,n;
	public: C(int a, float b, int c, int d): A(a),B(b)
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
	C z(5,2.5,6,8);
	z.show();
	z.show1();
	z.show2();
	return 0;
}
