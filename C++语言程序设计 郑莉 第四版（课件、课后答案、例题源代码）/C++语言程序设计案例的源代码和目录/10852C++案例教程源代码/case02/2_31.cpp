#include <iostream>
using namespace std;
int main()
{	int num, max;
	cout << "Enter positive integers (0 : end): ";  cin >> num;
	for (max = num; num > 0; )   						//���ñ��max
	{ 	if (num > max) max = num;	 	cin >> num; }		//ѭ�������޸ı����ֵ
	cout << "The max value is: " << max << endl;
	return 0;
}
