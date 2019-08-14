#include <iostream>
using namespace std;
int main()
{	int n=10;  int& sn=n;  						// sn是变量 n的别名
	cout << "&n = " << &n << ",  &sn = " << &sn << endl;
	int& sn2=sn;   							// sn2是变量 n的另一个别名
	int& sn3=sn2;  							// sn3是变量 n的另一个别名
	cout << "&sn2 = " << &sn2 << ", &sn3 = " << &sn3 << endl;
	return 0;
}
