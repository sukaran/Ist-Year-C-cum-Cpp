#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("hello.txt",ios::in);
	ofstream fout;
	fout.open("new.txt",ios::out);
	char ch;
	char line[75];
	int i=0;
	
	while(fin.get(ch))
	{
		fin.get(line,75,'.');
		fout<<line;
		i++;
	}
	cout<<"done"<<endl;
	return 0;
	
	
}
