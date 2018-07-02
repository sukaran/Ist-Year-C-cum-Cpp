#include<iostream>
using namespace std;
class Counter
{
	static int count;
	public:
		Counter()
		{
			count++;
		}
		void print()
		{cout<<"count is"<<count<<endl;
		}
};
int Counter::count=0;

int main(){
	Counter c1;
	c1.print();
	Counter c2;
	c2.print();
	Counter c3;
	c3.print();
}
