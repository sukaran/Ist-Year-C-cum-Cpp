#include<iostream>
using namespace std;

int main()
{ 
    int a,b;
	cout<<"enter the values of a and b";
	cin>>a>>b;
	
	
	try{
		if(b==0||b>a)
		{
			throw 1;
		}
		else{
			cout<<a/b;
		}
	}
	
	catch(int a)
	{
		cout<<"wrong input"<<endl;
	}
	 return 0;
}
