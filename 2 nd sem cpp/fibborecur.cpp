#include<iostream>
using namespace std;

int fib(int n)
{
	if(n==1||n==2)
{
		return 1;
		cout<<"1";}
	
	else{
	
	return (fib(n-1)+fib(n-2));
	cout<<""<<(fib(n-1)+fib(n-2));
}}

int main()
{
int n;


cout<<"entr the value of n";
cin>>n;

	fib(n);
}
