#include<iostream>
using namespace std;

class complex{int i,r;
public:
	void input()
	{cout<<"enter real part"<<endl;
	cin>>r;
	cout<<"enter imaginary part"<<endl;
	cin>>i;
	}
	complex operator+(complex a2)
	{
		complex a;
		a.r=r+a2.r;
		a.i=i+a2.i;
		return a;
	}
	complex operator-(complex a2)
	{
		complex a;
		a.r=r-a2.r;
		a.i=i-a2.i;
	    return a;
	}
	void display()
	{
		cout<<r<<"+"<<i<<endl;
	}
};
int main()
{complex a,b,c;
a.input();
b.input();
c=a+b;
c.display();
c=a-b;
c.display();	
}
