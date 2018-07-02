#include<iostream>
using namespace std;

int main()
{
	int i,j,a[10],b;
	cout<<"enter the array"<<endl;
	for(i=0;i<3;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<3;i++)
	{
	cout<<endl;
	cout<<"array at "<<i<<"index"<<a[i];}
    int temp;
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
			}
		}
    	
	}cout<<"the sorted array is";
	for(j=1;j<4;j++)
	{
		cout<<endl<<a[j];
	}}
