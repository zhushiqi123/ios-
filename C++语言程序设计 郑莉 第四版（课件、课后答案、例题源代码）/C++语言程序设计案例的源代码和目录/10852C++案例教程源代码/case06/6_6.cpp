#include <iostream>
using namespace std;
int main()
{	const int SIZE=4;				     //定义数组大小
	float Array[SIZE] = { 10, 20, 30, 40 };
     float f1=12.3, f2=45.6, f3=78.9;
	for (int i=0; i<7; i++)  			//语句1：下标超出范围！
		cout << "Array[" << i << "] = " << Array[i] << endl;
	return 0;
}
