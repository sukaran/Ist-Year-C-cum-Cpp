#include<iostream>
using namespace std;

int main()
{
	int money;
	cout<<"enter the money"<<endl;
	cin>>money;
    
	try
	{
		if(money>0)
		{
		cout<<"money deposited successfully"<<endl;
	}
	else
	{
		throw(money);
	}}
	catch(int n)
	{cout<<"you have entered negative values"<<endl;
	}
	}	
