#include <iostream>
using namespace std;
int main()
{	float Array[4] = { 10.0, 20.0, 30.0 };					//语句1：声明4维数组
	cout << "Array[100000000] = " << Array[100000000] << endl;	//错误1：下标不能访问
	Array[100000000] = 80.8f;  								//错误2：下标越界
	cout << "Array[100000000] = " << Array[100000000] << endl;
	cout << Array << endl;
	return 0;
}
