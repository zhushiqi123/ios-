#include <iostream>
using namespace std;
int& FindMax(int& m, int& n) {return (m > n ? m : n); } //����������ָ��int���͵�����
int main()
{	int m = 10, n = 20;
	cout << m << ", " << n << ", The max is:" << FindMax(m,n) << endl;
	FindMax(m,n) = 50;          					//��m��ֵ��10��Ϊ50
	cout << m << ", " << n << ", The max is:" << FindMax(m,n) << endl;
	return 0;
}
