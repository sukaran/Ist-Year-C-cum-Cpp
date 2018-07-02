#include<iostream>
using namespace std;


int fibbo(int n)
{
	if(n==1||n==2)
	return 1;
	else 
	 return (fibbo(n-1)+fibbo(n-2));
	
	

}

int main()
{
int i,n;
while(1)
{
	cout<<"fibbonacci";
	cin>>n;
if(n==0)	
break;
cout<<fibbo(n);
}}

