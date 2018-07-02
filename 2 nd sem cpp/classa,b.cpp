#include<iostream>
using namespace std;

class B;
class A
{
	int a;
	public:
		void setA(){
			a=10;}
		
        void showA(){
        	cout<<"a= "<<a;
		}
friend void swap(A&,B&);
};
class B
{
	int b;
	public:
	void setB()
	{
	b=20;}
	void showB()
	{cout<<"b= "<<b;
		}
		friend void swap(A&,B&);	
};
void swap(A&x,B&y)
{
	int t;
	t=x.a;
	x.a=y.b;
	y.b=t;
}
int main()
{
	A a; B b;
	a.setA(); b.setB();
	a.showA(); b.showB();
	swap(a,b);
	a.showA(); b.showB();
	
}
