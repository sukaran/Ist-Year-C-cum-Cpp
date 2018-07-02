#include<iostream>
using namespace std;

class test{
	int a,b;
	public:
		//int setval(int x,int y)
		
	
		
		test &setX(int x){a=x;return *this;
		}
			test &setY(int y){b=y;return *this;
		}
	int showval()
	{
		cout<<a<<b<<endl;
	}
};
int main()
{
	test obj;
	obj.setX(10);      obj.setY(20);
	obj.showval();
}
