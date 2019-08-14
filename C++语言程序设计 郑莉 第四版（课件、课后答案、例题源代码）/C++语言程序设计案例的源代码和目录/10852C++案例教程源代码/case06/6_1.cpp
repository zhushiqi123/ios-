#include <iostream>
using namespace std; 
int main() 
{	int Array[5]; 					//语句1：声明存放5个整型元素的数组 
	for(int t=0; t<5; ++t) Array[t] = t; 	//语句2：存储整型数值到数组中
	for(t=0; t<5; ++t) 
	  cout << "This is Array[" << t << "]: " << Array[t] << "\n"; //语句3：显示数组元素
	return 0; 
} 
