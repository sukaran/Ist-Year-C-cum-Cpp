#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int i,j;
	char a[25][25],temp[25];
	
	cout<<"enter the names of the cities"<<endl;
	for(i=0;i<3;i++)
{
		
	gets(a[i]);
}

for(i=0;i<3;i++)
{
	for(j=i+1;j<3;j++)
	{
		if(strcmp(a[i],a[j])>0)
		{
			strcpy(temp,a[i]);
			strcpy(a[i],a[j]);
			strcpy(a[j],temp);
		}
	}
}


cout<<"the order is"<<endl;	
	for(i=0;i<3;i++)
	{
		cout<<"\n"<<a[i];
	}
	
}
