#include<iostream>
using namespace std;

class Distance{
	int foot;
	float inch;
	public:
		void set(int x,float y)
		{
			foot=x;
			inch=y;
		}
		void disp()
		{
			cout<<"distance is "<<foot<<"feet "<<inch<<"inches"<<endl;
		}
		Distance add(Distance d)
		{Distance d1;
			d1.foot=foot+d.foot;
			d1.inch=inch+d.inch;
			return d1;
		}
};

int main()
{Distance d1,d2,d3;
d1.set(10,5.5);
d2.set(20,6.5);
d3=d1.add(d2);
d3.disp();
	
}
