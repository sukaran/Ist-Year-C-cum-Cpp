#include<iostream>
#include<fstream>
using namespace std;

int main()
{   char ch;
	ofstream fout;
	fout.open("hello.txt");
	
	cout<<"enter the text to be into file"<<endl;
	cin>>ch;
	fout<<ch;
	fout.close();
	
	
	
}
