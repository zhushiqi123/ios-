#include <iostream>
using namespace std;
int main()
{	int n, i=1;
	cout << "Enter a positive integer: ";  cin >> n;
	long sum=0;
	while (i <= n)		sum += i++;			//使用while循环语句执行累加
	cout << "The sum of the integers is: " << sum << endl;
	return 0;
}
