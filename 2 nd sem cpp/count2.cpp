#include<iostream>
using namespace std;

class count
{
	static int cunt;
	public:
		count()
		{
		
			 cunt++;
			 	cout<<"count is"<<cunt<<endl;
		}
};

int count::cunt=0;
int main()
{count c1,c2,c3;

	
}
