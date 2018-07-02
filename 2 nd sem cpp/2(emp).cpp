#include<iostream>
using namespace std;

class emp
{
	char name[10];
	int age;
	public:
		void getname();
		void getage();
		
}
void emp::getname(){
	cout<<"enter  the name of the employee\n"<<endl;
	cin>>name;
}
void emp::getage()
{
	cout<<"enter the age of the employee\n"<<endl;
	cin>>age;
}

int main()
{
	emp m[3];
	for(i=0;i<3;i++)
	{
    cout<<"enter the details of manager"<<i+1<<endl;
    m[i].getdata();
	
}


int main()
{
	
}
