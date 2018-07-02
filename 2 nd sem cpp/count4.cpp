#include<iostream>
using namespace std;

class test
{
	static int count;
	public:
	test()
	{
		count++;
		cout<<count;
	}
	
};
int test::count;
int main()
{
	test t1,t2,t3;

 } 
