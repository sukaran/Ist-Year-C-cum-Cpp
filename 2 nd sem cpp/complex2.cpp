#include<iostream>
using namespace std;
class Rectangle
{float l,w,p;
float a;
public:

	void setlength(float x)
	{
		l=x;
	}
	void setwidth(float y)
	{
		w=y;
	}
	float perimeter()
	{
		
		p=2*(l+w);
	}
	float area()
	{
		
		a=(l*w);
	}
	void show()
	{
		cout<<l<<w<<endl;
	}
	
	void print()
	{cout<<"area is"<<a<<endl<<"perimeter is"<<p;
	}
	int samearea(Rectangle r5)
	{
    if(a==r5.a)
    cout<<"1"<<endl;
	else
	{
		cout<<"0"<<endl;
	}
	}
};

int main()
{
	Rectangle r1,r2;
	r1.setlength(5);
	r1.setwidth(2.5);
	r2.setlength(20);
	r2.setwidth(100);
	
	r1.perimeter();
	r1.area();
	
	r2.perimeter();
	r2.area();
	r1.show();
	r2.show();
	r1.print();
	r2.print();
cout<<endl;
r1.samearea(r2);
}
