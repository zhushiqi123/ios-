#include <iostream> 
using namespace std;
void fun(int,int&);				//函数参数一个为值传递，一个引用传递
int main()
{ int a = 22, b = 44;
  cout << "Initial a = " << a << ", b = " << b << endl;
  fun(a,b);  		cout << "After fun(a,b), a = " << a << ", b = " << b << endl;
  fun(2*a-3,b);  	cout << "After fun(2*a-3,b), a = " << a << ", b = " << b << endl;
  return 0;
}
void fun(int x, int& y){ x = 88;  y = 99;}
