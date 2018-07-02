#include<iostream>
using namespace std;

int main()
{
	int n,rn=0,rm;
	cout<<"enter n";
	cin>>n;
	while(n!=0)
	{
	
	rm=n%10;
	rn=rn*10+rm;
	n/=10;}
	cout<<"reversed number is = "<<rm;
}
