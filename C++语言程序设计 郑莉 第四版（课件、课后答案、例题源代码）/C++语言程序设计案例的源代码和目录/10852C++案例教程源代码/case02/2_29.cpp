#include <iostream>
using namespace std;
int main()
{ 	long limits;
  	cout << "Enter a positive integer: ";  	cin >> limits;
  	cout << "Factorial numbers of "<<0<<" is " << 1<<endl;
  	cout << "Factorial numbers of "<<1<<" is " << 1<<endl;
  	long fac=1;
	for(int i=2;fac<=limits;i++)				//使用for 循环代替do-while循环
	{  fac *= i;
		  cout << "Factorial numbers of "<<i<<" is " << fac<<endl;
	}
	return 0;
}
