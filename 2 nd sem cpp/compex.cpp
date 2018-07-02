#include<iostream>
using namespace std;

class complex
{
	int i,r;
	public:
    void read()
    {
    	cout<<"\nenter real part\n"<<endl;
    	cin>>r;
    	cout<<"enter imaginary part\n"<<endl;
    	cin>>i;
	}
    void display()
    {
    	cout<<"\n "<<r<<"+"<<i<<"i";
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
    	a.i=(r*a2.i)+(i*a2.r);
    	return a;
    }
    complex operator/(complex a2)
    {
    	complex a;
    	a.r=((r*a2.r)+(i*a2.i))/(a2.r*a2.r)+(a2.i+a2.i);
    	a.i=((r*a2.i)-(i*a2.r))/(a2.r*a2.r)+(a2.i+a2.i);
    	return a;
	}
    };
int main()
{
	complex c,a,b;
	int ch;
	do
	{
		cout<<"\n1.addition\n2.subtraction\n3.multiplication\n4.divsion"<<endl;
	
	cout<<"enter your choice\n"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"enter 1st complex number";
			a.read();
			a.display();
			cout<<"enter 2nd complex number";
			b.read();
			b.display();
			c=a+b;
			c.display();
	        break;
	    case 2:
	    	cout<<"enter 1st complex number";
	    	a.read();
	    	a.display();
	    	cout<<"enter 2nd complex number";
	    	b.read();
	    	b.display();
	    	c=a-b;
	    	c.display();
	    	break;
	    case 3:
		    cout<<"enter 1st complex number";
			a.read();
			a.display();
			cout<<"enter 2nd complex number";
			b.read();
			b.display();
			c=a*b;
			c.display();
			break;
		case 4:
		    cout<<"enter 1st complex number";
			a.read();
			a.display();
			cout<<"enter 2nd complex number";
			b.read();
			b.display();
			c=a/b;
			c.display();
			break;
		}
}	while(ch!=5);
}
	
	
	
	
	
	
	

