#include<iostream>
using namespace std;

class counter
{
	static int count;
	public:
		counter()
		{
			count++;
		}
		
		
		
		void print()
		{
			cout<<count<<endl;
		}
};
int counter::count=0;
int main()
{
	counter c1;

	counter c2;

	counter c3;
	c3.print();
	}
