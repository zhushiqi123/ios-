#include <iostream>
using namespace std;
int main()
{	int n=10;  cout << "n = " << n << endl << "&n = " << &n << endl;
	int* pn=&n;  					//pn 保存了变量 n的地址
	cout << "pn = " << pn << endl << "&pn = " << &pn << endl << "*pn = " << *pn << endl;
	int nn=*pn;  					//将n中的数值赋给nn
	cout << "nn = " << nn << endl << "&nn = " << &nn << endl;
	int& rpn=*pn;  				//rpn 是 n的别名
	cout << "rpn = " << rpn << endl << "&rpn = " << &rpn << endl;
	return 0;
}
