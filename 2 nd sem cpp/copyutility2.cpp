#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	
	ifstream fin;
	fin.open("hi.txt");
	
	ofstream fout;
	fout.open("hello.txt");
	
	int i=1;
	char ch;
	char line[75];
	
	while(fin.get(ch))
	{
		fin.get(line,75,'.');
		fout<<line;
		i++;
		
	}
	fout.close();
	return 0;
	
}
