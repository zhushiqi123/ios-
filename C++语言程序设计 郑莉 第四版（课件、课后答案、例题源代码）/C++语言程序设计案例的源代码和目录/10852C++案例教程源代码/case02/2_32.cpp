#include <iostream>
using namespace std;
int main()
{	int i, j;
	cout<<"Please input two integers:";  cin>>i>>j;
	for (int m=i, n=j; m%n > 0; m--,n--)			//ʹ�ö��ѭ�����Ʊ�����forѭ��
		cout << m << "%" << n << " = " << m%n << endl;
	return 0;
}