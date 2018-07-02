#include<iostream>
#include<fstream>
using namespace std;

int main()
{fstream fin; char ch; int count=0;
fin.open("hello.txt");
while(!fin.eof())
{
	ch=fin.get();
if(isalpha(ch)) count++;	
} 

cout<<count;
	
}

