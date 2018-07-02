#include<iostream>
using namespace std;






int main()
{
int i,j;
try{

for(i=1;i<10;i++)
{   if(i>1){

	cout<<"fact "<<(i=i*(i-1));
}
else{throw;}

}}
catch()
{
	cout<<"fact not possible\n";
}


	
}
