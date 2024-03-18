#include<iostream>
using namespace std;

class student
{
	protected:
	int rno;
	public:
	void getdata(int i)
	{
		rno=i;
	}	
	void show()
	{
		cout<<"\n Roll no: "<<rno;
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
		void show1()
		{
			cout<<"\n marks of subject one: "<<m1<<endl;
			cout<<"\n marks of subject two: "<<m2;
		}
};
class result: public marks
{
	int total;
	public:
		void display()
		{
			total=m1+m2;
			cout<<"\n Total marks: "<<total;
		}
};
int main()
{
	result a;
	a.getdata(1);
	a.getmarks(50,70);
	a.show();
	a.show1();
	a.display();
	return 0;
}
