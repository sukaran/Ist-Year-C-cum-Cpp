#include<iostream>
using namespace std;

class Manager
{char number;
int age;
public:
	void getdata(int x,int y)
	{
		number=x;
		age=y;
	}
	void display()
	{
		cout<<number;
		cout<<age;
	}
};

int main()
{Manager c[10];
int i;
for(i=0;i<3;i++){

	c[i].getdata(5522,24);
	c[i].display();
}}
