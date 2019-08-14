#include <iostream>
using namespace std;
int main()
{	int n=20;  cout << "n = " << n << endl;
	n += 8;   cout << "After n += 8, n = " << n << endl; 	//使用复合的赋值运算符+=
	n -= 6;   cout << "After n -= 6, n = " << n << endl; 		//使用复合的赋值运算符-=
	n *= 1;   cout << "After n *= 1, n = " << n << endl;		//使用复合的赋值运算符*=
	n /= 4;   cout << "After n /= 4, n = " << n << endl; 		//使用复合的赋值运算符/=
	n %= 3;  cout << "After n %= 3, n = " << n << endl; 	//使用复合的赋值运算符%=
	return 0;
}
