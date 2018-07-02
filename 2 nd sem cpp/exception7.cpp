#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char u[10],p[10];
	
	cout<<"ebter username"<<endl;
	gets(u);
	
	cout<<"enter password"<<endl;
	gets(p);
	try{
		if(strlen(p)<6)
		{
	    cout<<"the password is short "<<endl;
        
		throw 10;}
		else {
			cout<<"password is correct"<<endl;
		}
		bool digit_yes;
		bool valid=false;
		int i;
		for(i=0;i<strlen(p);i++)
		if(isdigit(p[i]))
		{
		digit_yes=true;	
		}
		
		if(!digit_yes)
		{
			cout<<"must contain 0-9"<<endl;
			throw 10;
		}
		
	}
	catch(int k)
	{
		cout<<"invalid format"<<endl;
	}
	catch(...)
	{
		cout<<"default exception"<<endl;
	}
}
