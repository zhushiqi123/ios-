#include <iostream>
using namespace std;
int& FindMax(int& m, int& n) {return (m > n ? m : n); } //返回类型是指向int类型的引用
int main()
{	int m = 10, n = 20;
	cout << m << ", " << n << ", The max is:" << FindMax(m,n) << endl;
	FindMax(m,n) = 50;          					//将m的值从10变为50
	cout << m << ", " << n << ", The max is:" << FindMax(m,n) << endl;
	return 0;
}
