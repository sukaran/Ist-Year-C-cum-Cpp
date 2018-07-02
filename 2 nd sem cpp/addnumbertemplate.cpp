#include<iostream>
using namespace std;

template<class T>
void print(T a,T b)
{
cout<<a+b<<endl;	
}
int main()
{
	double a=5.56,b=9.3;
	print(a,b);
}
