#include <iostream>
using namespace std;
int main()
{	int n=10;  int& sn=n;  						// sn�Ǳ��� n�ı���
	cout << "&n = " << &n << ",  &sn = " << &sn << endl;
	int& sn2=sn;   							// sn2�Ǳ��� n����һ������
	int& sn3=sn2;  							// sn3�Ǳ��� n����һ������
	cout << "&sn2 = " << &sn2 << ", &sn3 = " << &sn3 << endl;
	return 0;
}
