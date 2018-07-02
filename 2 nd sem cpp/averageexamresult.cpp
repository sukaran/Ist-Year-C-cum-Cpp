#include<iostream>
using namespace std;

class student{
	protected:
	int r;
	char n[10];	
		public:
			virtual void getdata()=0;
};
class exam:public student
{
public:
	int a,b,c;
void getdata()
{
	cin>>a,b,c;
}
};

class result:public exam
{
public:
void sum()
{
	int s;
	s=a+b+c;
	}	
	void show()
	{
		cout<<n<<endl<<r<<endl<<a<<b<<c<<endl;
	}
};
int main()
{
student *s;
exam e;
result r;
r.getdata();

r.sum();
r.show();
return 0;
}
