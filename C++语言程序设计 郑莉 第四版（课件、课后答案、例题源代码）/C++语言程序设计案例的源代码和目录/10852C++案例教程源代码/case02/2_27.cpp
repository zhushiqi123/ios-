#include <iostream>
using namespace std;
int main()
{	int n, i=1;
	cout << "Enter a positive integer: ";  cin >> n;
	long sum=0;
	while (i <= n)		sum += i++;			//ʹ��whileѭ�����ִ���ۼ�
	cout << "The sum of the integers is: " << sum << endl;
	return 0;
}
