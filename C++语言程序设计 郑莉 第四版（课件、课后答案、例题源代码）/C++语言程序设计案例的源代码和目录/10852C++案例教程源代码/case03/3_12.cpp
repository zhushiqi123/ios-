#include <iostream>  
using namespace std;
long int gcd(long int m,long int n)	   //�����Լ��
{	if (m < n) swap(m,n);
	while (n>0)
    {   int r = m%n;	m = n;	  n = r;  }
	return m;
}
long int lcm(long int m,long int n)     //����С������
{return m*n/gcd(m,n);} 
int main()
{	int m, n;
	cout << "Please input two integers: ";	cin >> m >> n;
	cout << "lcm(" << m << "," << n << ") = " << lcm(m,n) << endl;
	return 0;
}
