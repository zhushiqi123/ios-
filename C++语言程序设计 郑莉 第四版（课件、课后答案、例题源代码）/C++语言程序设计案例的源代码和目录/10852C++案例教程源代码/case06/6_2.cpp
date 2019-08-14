#include <iostream>
using namespace std;
int main()
{	const int SIZE=5;  						//语句1：定义符号常量用于设置数组大小
	double Array[SIZE];    						//语句2：将数组元素声明为双精度型
	cout << "Enter " << SIZE << " numbers:\t";
	for (int i=0; i<SIZE; i++)	cin >> Array[i];	//语句3：使用符号常量控制循环次数
	cout << "In reverse order: ";
	for (i=SIZE-1; i>=0; i--)					//语句4：使用符号常量控制循环次数
       cout << " " << Array[i]; 
	return 0;
}
