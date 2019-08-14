#include <iostream>
using namespace std;
int main()
{	float Array[5] = { 10, 20, 30 };			//语句1：部分初始化数组
	//float Array[2] = { 10, 20, 30 };		//语句2：错误
	int size = sizeof(Array)/sizeof(float);	//求数组实际分配大小
	for (int i=0; i<size; i++)    cout << "Array[" << i << "] = " << Array[i] << endl;
	return 0;
}
