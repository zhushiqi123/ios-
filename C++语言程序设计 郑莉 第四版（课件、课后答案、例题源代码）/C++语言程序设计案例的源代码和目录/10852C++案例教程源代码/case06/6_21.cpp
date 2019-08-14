#include <iostream>
using namespace std;
int main()
{	int n=10;
	cout << "n = " << n << ", &n = " << &n << endl;
	int* pn=&n;  						//pn 保存了 n的地址
	cout << "        pn = " << pn << endl;
	cout << "&pn = " << &pn << endl;		//输出地址
	cout << "*pn = " << *pn << endl;		//输出数值
	return 0;
}
