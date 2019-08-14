#include <iostream>
using namespace std;
int sum(int [], int);								//原型声明
int main()
{	int Array[] = { 10, 30, 50, 70 };  
     int size = sizeof(Array)/sizeof(int);
	cout << "sum(Array,size) = " << sum(Array,size) << endl;
	return 0;
}
int sum(int Array[], int n)							//返回数组中前n个元素的和
{	int sum=0;
	for (int i=0; i<n; i++)    sum += Array[i];
	return sum;
}
