#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n>1){
		return (n*factorial(n-1));
	       }
    else {return 1;
	}	
}
int main()
{
	int n;
	cout<<"enter value of n"<<endl;
	cin>>n;
	cout<<" "<<factorial(n);
}
