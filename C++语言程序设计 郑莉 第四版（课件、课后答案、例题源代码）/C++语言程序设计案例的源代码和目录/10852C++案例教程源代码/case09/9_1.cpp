#include <iostream> 
using namespace std; 
template <class X> void swapfun(X &a, X &b) 
{	X temp;   temp = a;   a = b;   b = temp;   cout << "Inside template swapfun.\n"; } 
void swapfun(int &a, int &b) //�����غ�����ģ�庯��swapfun()��int������ͬ 
{	int temp;   temp = a;   a = b;   b = temp; 
	cout << "Inside swapfun int specialization.\n"; 
} 
int main() 
{	int i=1, j=2;   float x=1.1, y=2.3;   char a='a', b='b'; 
	cout << "Original i, j: " << i << ' ' << j << '\n'; 
	cout << "Original x, y: " << x << ' ' << y << '\n'; 
	cout << "Original a, b: " << a << ' ' << b << '\n'; 
	swapfun(i, j);  //���÷�ģ�庯��void swapfun(int &a, int &b)
   swapfun(x, y);  //����ģ���ʵ��
   swapfun(a, b); //����ģ���ʵ�� 
	cout << "swapped i, j: " << i << ' ' << j << '\n'; 
	cout << "swapped x, y: " << x << ' ' << y << '\n'; 
	cout << "swapped a, b: " << a << ' ' << b << '\n'; 
	return 0; 
}
