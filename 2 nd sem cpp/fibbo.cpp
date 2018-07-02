#include<iostream>
using namespace std;

int main()
{
	int i,n,nextterm,t1=0,t2=1;
	cout<<"enter the number of terms"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(i==1)
		{
			cout<<t1;
			continue;
		}
		if(i==2)
		{
			cout<<t2;
			continue;
		}
	nextterm=t1+t2;
	t1=t2;
	t2=nextterm;
	cout<<endl;
	cout<<t2;
	
	}
	return 0;
	
}
