#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int in,age,v,j,i;
	char city[10];
	cout<<"enter the age "<<endl;
	cin>>age;
	
	cout<<"enter the income"<<endl;
	cin>>in;
	
	cout<<"enter the no. of wheels of thge vehicle"<<endl;
	cin>>v;
	
	cout<<"enter city"<<endl;
	cin>>city;
	try{
	
	if(age<18||age>55 ||in<50000 ||in>100000 || v<4||v>4||strcmp(city,("bombay","delhi"))!=0)
	{
		throw 1;
	}
	else
	{
		cout<<age<<"\n"<<in<<"\n"<<v<<"\n"<<city<<endl;
	}}
	catch(int a)
	{
		cout<<"wrong!!!!"<<endl;
	}
	return 0;
	}
	
	
	
