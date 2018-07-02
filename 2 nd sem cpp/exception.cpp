#include<iostream>
using namespace std;

class A
{
	public :
	void show()
	{
		cout<<"this is a"<<endl;
	}
	
};
class B:public A
{
		public :
	void show()
	{
	
		cout<<"this is b"<<endl;
	}
	
};
int main()
{
	A *a;B b;
	a=&b; 
a->show();	
}
