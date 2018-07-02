#include<iostream>
#include<string.h>
using namespace std;


int main()
{
int i,j,count;
char str[25][25],temp[25];
cout<<"enter the no. of strings";
cin>>count;
	cout<<"enter the string"<<endl;
	for(i=0;i<count;i++)
{
    gets(str[i]);
}
cout<<"the string is"<<endl;
for(i=0;i<count;i++)
{
	puts(str[i]);
}
for(i=0;i<count;i++)
{
	for(j=i+1;j<count;j++)
	if(strcmp(str[i],str[j])>0)
	{
	strcpy(temp,str[i]);
	strcpy(str[i],str[j]);
	strcpy(str[j],temp);
    }
}

	cout<<"the sorted array is";
	for(i=0;i<count;i++)
	{
		cout<<" "<<str[i];
	}
}


