#include <iostream>  
using namespace std;
//���������βΣ��ں����в��ܸ���z�����õĶ�����˶�Ӧ��ʵ�β��ᱻ�ƻ���
void fun(int x, int& y, const int& z)
{ 	x += z; y += z; cout << "x = " << x << ", y = " << y << ", z = " << z << endl;}
int main()
{	int a = 20, b = 30, c = 40;
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
	fun(a,b,c);  	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
	fun(2*a-3,b,c);  cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
	return 0;
}
