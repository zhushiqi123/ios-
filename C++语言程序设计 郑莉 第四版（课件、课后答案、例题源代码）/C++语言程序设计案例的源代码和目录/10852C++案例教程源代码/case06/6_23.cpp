#include <iostream>
using namespace std;
int main()
{	int n=10;  cout << "n = " << n << endl << "&n = " << &n << endl;
	int* pn=&n;  					//pn �����˱��� n�ĵ�ַ
	cout << "pn = " << pn << endl << "&pn = " << &pn << endl << "*pn = " << *pn << endl;
	int nn=*pn;  					//��n�е���ֵ����nn
	cout << "nn = " << nn << endl << "&nn = " << &nn << endl;
	int& rpn=*pn;  				//rpn �� n�ı���
	cout << "rpn = " << rpn << endl << "&rpn = " << &rpn << endl;
	return 0;
}
