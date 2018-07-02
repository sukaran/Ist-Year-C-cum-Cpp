#include<iostream>
using namespace std;

int main()
{
	int i,n,k[10],temp,j;
	cout<<"enter the number of numbers ";
	cin>>n;
	cout<<"enter numbers";
	for(i=0;i<n;i++)
	{
		cin>>k[i];
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	
	{if(k[j+1]>k[j])
{
	temp=k[j];
	k[j]=k[j+1];
	k[j+1]=temp;
	
	}}}	
		
			cout<<k[1];
		}

