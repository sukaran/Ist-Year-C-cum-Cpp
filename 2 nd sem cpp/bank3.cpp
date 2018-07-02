#include<iostream>
using namespace std;

class Bank
{
	int acno;        
	int b;
	char name[10],s_c;
	public:
		void values()
		{
			cout<<"enter name"<<endl;   
			  cin>>name;                    
			cout<<"enter acno"<<endl;  
			   cin>>acno;                       
			cout<<"enter type of bank account"<<endl; 
			   cin>>s_c;        
			cout<<"balance"<<endl;    
			   cin>>b;                        
		}
		void deposit()
		{
			int d;
			cout<<"enter the deposit amount"<<endl;
			cin>>d;
			cout<<"newly amount"<<d+b<<endl;
			b=d+b;
		}
		void withdraw()
		{
			int w;
			cout<<"balance"<<b;
			cout<<"enter the amount to be withdrawn"<<endl;
			cin>>w;
			cout<<"new balance"<<b-w;
		    b=b-w;
		}
		void display()
		{
			cout<<"name"<<name<<"account nuber"<<acno<<"balance"<<b<<endl;
		}};
		
		
int main()
{
		Bank c1;
		c1.values();
		c1.deposit();
		c1.withdraw();
	return 0;
	} 
	

