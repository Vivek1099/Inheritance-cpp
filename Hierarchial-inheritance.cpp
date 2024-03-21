#include<iostream>
using namespace std;
class shape
{	
	public:
		int l,b;
		void getdata(int i, int j)
		{
			l=i;
			b=j;
		}
};

class rect: public shape
{
	public:
		int area()
		{
			return (l*b);
		}
};

class tri: public shape
{
	public:
		float area1()
		{
			return (0.5*l*b);
		}
};

int main()
{
	rect x;
	tri y;
	x.getdata(20,30);
	int m=x.area();
	cout<<"\n Area of rectangle= "<<m;
	y.getdata(50,60);
	int n=y.area1();
	cout<<"\n Area of triangle= "<<n;
	return 0;
}
