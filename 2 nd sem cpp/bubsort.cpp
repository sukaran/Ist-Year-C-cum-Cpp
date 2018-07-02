#include<iostream>
using namespace std;

int main()
    {
    int i,j,n;
    int a[10],temp;
    cout<<"enter the size ";
    cin>>n;
    cout<<"enter the array";
    for(i=0;i<n;i++)
    {
	  cin>>a[i];
    }
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}
	for(i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	
}
