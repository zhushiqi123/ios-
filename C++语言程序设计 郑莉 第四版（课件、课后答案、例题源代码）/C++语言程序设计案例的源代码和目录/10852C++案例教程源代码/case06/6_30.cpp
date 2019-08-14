#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() 
{   int Array[10],*va=Array;
	for(int i=0;i<10;i++)	*(va+i)=i+1;				//通过指针为数组赋值
	for(i=0;i<10;i++)		cout<<setw(4)<<Array[i];	//通过数组下标访问数组元素
	cout<<endl;
	for(i=0;i<10;i++)		*va++=i+1;				//通过指针为数组赋值
	va=Array;      								//重置指针使其指向数组首地址
	for(i=0;i<10;i++)		cout<<setw(4)<<*va++;		//通过指针访问数组元素
	cout<<endl;
	return 0;
}
