#include<iostream>
using namespace std;
class Complex
{
	int i,r;
	public:
	Complex setdata(int x, int y)
	{
		r=x;
		i=y;
		
	}
	Complex operator+(Complex a2)
	{Complex a;
	a.r=r+a2.r;
	a.i=i+a2.i;
	return a;
	} 
	Complex operator-(Complex a2)
	{
		Complex a;
		a.r=r-a2.r;
		a.i=i-a2.i;
		return a;
	}
	void print(void)
	{
		cout<<r<<"+"<<i<<endl;
	}
	};
int main()
{
	Complex c1,c2,c3,c4;
	c1.setdata(2,4);
	c2.s
	etdata(5,10);
	c3=c1+c2;
	c4=c1-c2;
	c3.print();
	c4.print();
}
