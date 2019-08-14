#include <iostream>
using namespace std;
int main()
{	int n=10;  cout << "n = " << n << "\n&n = " << &n << endl;
	int* pn=&n;  							//pn 保存了变量 n的地址
	cout << "pn = " << pn << "\n&pn = " << &pn <<"\n*pn = " << *pn << endl;
	int** ppn=&pn;  						//ppn 保存了指针变量 pn的地址
	cout << "ppn = " << ppn << "\n&ppn = " << &ppn << endl;
	cout << "*ppn = " << *ppn <<"\n**ppn = " << **ppn << endl;
	int*** pppn=&ppn;  					//pppn 保存了指针变量 ppn的地址
	cout << "pppn = " << pppn << "\n&pppn = " << &pppn << endl;
	cout << "*pppn = " << *pppn <<"\n**pppn = " << **pppn << endl;
	cout << "***pppn = " << ***pppn << endl;
	return 0;
}
