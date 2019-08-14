#include <iostream>
using namespace std;
int main()
{	const int SIZE=5;  			//定义数组大小
	float Array[SIZE];     		     //语句1：声明浮点型数组
	for (int i=0; i<SIZE; i++)   
       cout << "Array[" << i << "] = " << Array[i] << endl;
	return 0;
}
