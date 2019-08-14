#include <iostream> 
using namespace std; 
template <class X> void swapfun(X &a, X &b) 
{	X temp;   temp = a;   a = b;   b = temp;   cout << "Inside template swapfun.\n"; } 
void swapfun(int &a, int &b) //该重载函数与模板函数swapfun()的int类型相同 
{	int temp;   temp = a;   a = b;   b = temp; 
	cout << "Inside swapfun int specialization.\n"; 
} 
int main() 
{	int i=1, j=2;   float x=1.1, y=2.3;   char a='a', b='b'; 
	cout << "Original i, j: " << i << ' ' << j << '\n'; 
	cout << "Original x, y: " << x << ' ' << y << '\n'; 
	cout << "Original a, b: " << a << ' ' << b << '\n'; 
	swapfun(i, j);  //调用非模板函数void swapfun(int &a, int &b)
   swapfun(x, y);  //调用模板的实例
   swapfun(a, b); //调用模板的实例 
	cout << "swapped i, j: " << i << ' ' << j << '\n'; 
	cout << "swapped x, y: " << x << ' ' << y << '\n'; 
	cout << "swapped a, b: " << a << ' ' << b << '\n'; 
	return 0; 
}
