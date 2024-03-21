#include<iostream>
using namespace std;

class student
{
	protected:
		int  rno;
	public:
		void getrno(int k)
		{
			rno=k;
		}
		void show()
		{
			cout<<"\nRoll no= "<<rno;
		}
};

class marks: public student
{
	protected:
		int m1,m2;
	public:
		void getmarks(int i, int j)
		{
			m1=i;
			m2=j;
		}
		void show()
		{
			cout<<"\n Marks of subject 1= "<<m1<<endl;
			cout<<"\n Marks of subject 2= "<<m2;
		}
};

class score
{
	protected:
		int s;
	public:
		void getscore(int l)
		{
			s=l;
		}
};

class result: public marks, public score
{
	int total;
	public:
		void display()
		{
			total=m1+m2+s;
			cout<<"\nTotal marks= "<<total;
		}
};

int main()
{
	result x;
	x.getrno(1);
	x.getmarks(50,70);
	x.getscore(20);
	x.show();
	x.display();
	return 0;
}
