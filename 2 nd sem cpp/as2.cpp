#include<iostream>
using namespace std;
class Test
{
	static int n;
	
	public:
		void setdata(int x){
		n=x;}
		static int show_count(){cout<<"n is "<<n;
			
		}
		
};
	int Test::n;
	
int main()
{
Test t1,t2,t3;
t1.setdata(4);
t1.show_count();
t2.setdata(5);
t2.show_count();
t3.setdata(4);	
t3.show_count();
}
