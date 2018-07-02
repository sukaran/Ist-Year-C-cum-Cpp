#include<iostream>
using namespace std;

class shape{
	protected:
double i,r;
public:
void getdata(double l,double b)
{
	i=l;
	r=b;
	}	
void virtual display()=0;
	
};
class rectangle:public shape{
	public:
		void display()
		{
			cout<<"area of rectangle is"<<i*r;
		}
};
class circle:public shape
{public: 
   void display()
   {
   	cout<<"area of circle "<<(2*3.14*r);
   }
	
};
int main()
{
shape *s;
rectangle r;
s=&r;
s->getdata(40,10);
s->display();

circle c;
s=&c;
	s->getdata(10,1);
	s->display();
}
