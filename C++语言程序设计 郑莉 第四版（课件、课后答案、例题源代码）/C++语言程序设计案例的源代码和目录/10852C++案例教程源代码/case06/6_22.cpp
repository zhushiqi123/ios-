#include <iostream>
using namespace std;
int main()
{	int n=10;  cout << "n = " << n << "\n&n = " << &n << endl;
	int* pn=&n;  							//pn �����˱��� n�ĵ�ַ
	cout << "pn = " << pn << "\n&pn = " << &pn <<"\n*pn = " << *pn << endl;
	int** ppn=&pn;  						//ppn ������ָ����� pn�ĵ�ַ
	cout << "ppn = " << ppn << "\n&ppn = " << &ppn << endl;
	cout << "*ppn = " << *ppn <<"\n**ppn = " << **ppn << endl;
	int*** pppn=&ppn;  					//pppn ������ָ����� ppn�ĵ�ַ
	cout << "pppn = " << pppn << "\n&pppn = " << &pppn << endl;
	cout << "*pppn = " << *pppn <<"\n**pppn = " << **pppn << endl;
	cout << "***pppn = " << ***pppn << endl;
	return 0;
}
