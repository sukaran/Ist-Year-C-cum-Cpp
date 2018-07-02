#include<iostream>
using namespace std;

class sample
{
	int a[10];
	public:
		void setval();
		void sort(){
	for(int i=0;i<9;i++)
	{for(int j=0;j<10-i-1;j++)
	if(a[j]>a[j+1])
	{
		a[j]=a[j]+a[j+1];
		a[j+1]=a[j]-a[j+1];
		a[j]=a[j]-a[j+1];
	}
	}}
	
		void show()
		{
	for(int i=0;i<10;i++)
	{cout<<a[i];
}
		};
		
};

void sample::setval(){
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}



}
int main()
{
sample s1;
s1.setval();
s1.sort();
s1.show();	
}
