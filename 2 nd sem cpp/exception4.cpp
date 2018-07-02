#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"entr n"; cin>>n;
	try{

	if(n==1) throw 1;
	if(n==2) throw 2;
	if(n==3) throw 3;
}
catch(int e)
{
	if(e==1)
	cout<<"1 yo";
	 
	 if(e==2)
	 cout<<"2 yp";
	 
	 if(e==3)
	 cout<<"3 nyo";
}}
