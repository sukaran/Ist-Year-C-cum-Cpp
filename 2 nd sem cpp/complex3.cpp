#include<iostream>
using namespace std;

class complex{
	int i,r;
	public:
		void read()
		{
				cout<<"enter the real part of complex number"<<endl;
				cin>>r;
				cout<<"enter the imaginary part of complex number"<<endl;
				cin>>i;
		}
		void display()
		{
			cout<<" "<<r<<"+"<<i<<"i";
			
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
		complex operator*(complex a2)
		{
			complex a;
			a.r=(r*a2.r)-(i*a2.i);
            a.i=(r*a2.r)+(i*a2.i);			
			return a;
		}
		complex operator/(complex a2)
		{
			complex a;
		     a.r=((r*a2.r)+(i*a2.i))/(a2.r*a2.r+a2.i*a2.i);
		     a.i=((r*a2.r)-(i*a2.i))/(a2.r*a2.r+a2.i*a2.i);
			return a;
		}
};
int main()
{
	complex c,a,b;
	int ch;
	do
	{
	cout<<"\n1.addition\n2.subtraction\n3.multiplication\n4.division";
	cout<<"enter your choice"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:	
		    cout<<"enter 1st compex number"<<endl;
			a.read();
			a.display();
			cout<<"enter 2nd complex number"<<endl;
			b.read();
			b.display();
			c=a+b;
			c.display();
        case 2:
		    cout<<"enter 1st compex number"<<endl;
			a.read();
			a.display();
			cout<<"enter 2nd complex number"<<endl;
			b.read();
			b.display();
			c=a-b;
			c.display();
		case 3:
		    cout<<"enter 1st compex number"<<endl;
			a.read();
			a.display();
			cout<<"enter 2nd complex number"<<endl;
			b.read();
			b.display();
			c=a*b;
			c.display();
		case 4: 
			cout<<"enter 1st compex number"<<endl;
			a.read();
			a.display();
			cout<<"enter 2nd complex number"<<endl;
			b.read();
			b.display();
			c=a/b;
			c.display();   			
	}}while(ch!=5);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

