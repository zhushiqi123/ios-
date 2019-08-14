#include <iostream>
using namespace std;
int main()
{	int num, max;
	cout << "Enter positive integers (0 : end): ";  cin >> num;
	for (max = num; num > 0; )   						//设置标记max
	{ 	if (num > max) max = num;	 	cin >> num; }		//循环体内修改标记数值
	cout << "The max value is: " << max << endl;
	return 0;
}
