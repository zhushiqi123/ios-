#include <iostream>
using namespace std;
int main()
{	int n=10;
	cout << "n = " << n << ", &n = " << &n << endl;
	int* pn=&n;  						//pn ������ n�ĵ�ַ
	cout << "        pn = " << pn << endl;
	cout << "&pn = " << &pn << endl;		//�����ַ
	cout << "*pn = " << *pn << endl;		//�����ֵ
	return 0;
}
