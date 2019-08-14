#include <iostream>
using namespace std;
int main()
{	int n=44;
	//int& rn=55; 			//错误：55不是一个变量！
	int& rn=n;  				//rn 是变量 n的别名
	cout << "The value of n is: " << n << ", The value rn is: " << rn << endl;
	--n;  	cout << "The value of n is: " << n << ", The value rn is: " << rn << endl;
	rn *= 3;	cout << "The value of n is: " << n << ", The value rn is: " << rn << endl;
	return 0;
}
