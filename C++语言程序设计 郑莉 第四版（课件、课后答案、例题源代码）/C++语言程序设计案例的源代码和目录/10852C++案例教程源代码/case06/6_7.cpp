#include <iostream>
using namespace std;
int main()
{	float Array[] = { 10, 20, 30 };				//语句1：声明三个元素的数组
	cout << "Array[3] = " << Array[3] << endl;
	Array[3] = 80.8f;  						//语句2：错误：下标越界!
	cout << "Array[3] = " << Array[3] << endl;
	return 0;
}
