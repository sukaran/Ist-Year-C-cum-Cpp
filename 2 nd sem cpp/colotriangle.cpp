#include <iostream>

using namespace std;

int pwr(int b,int e)
{
	int r1;
	while(e!=0)
	{
		r1=r1*b;
		--e;
	}
	return r1;
}
int towerColoring(int n){
  int r2,result;
    r2=pwr(3,n);
    result=pwr(r2,3);
    return result;
}

int main() {
    int n;
    cin >> n;
    int result = towerColoring(n);
    cout << result << endl;
    return 0;
}
