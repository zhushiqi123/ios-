#include <iostream>
using namespace std;
int main()
{	float Array[] = { 10, 20, 30 };				//语句1：数组初始化
	int size = sizeof(Array)/sizeof(float);		//语句2：求数组的实际大小
	for (int i=0; i<size; i++)    cout << "Array[" << i << "] = " << Array[i] << endl;
	return 0;
}