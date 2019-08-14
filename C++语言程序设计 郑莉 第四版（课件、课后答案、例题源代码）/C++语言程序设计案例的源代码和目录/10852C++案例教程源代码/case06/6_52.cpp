#include <iostream> 
using namespace std; 
int main() 
{	int *first,*second;		//声明指针变量
	first=new int[5];			//语句1：创建一个大小为10的动态数组
	for(int i=0;i<5;i++) 	first[i]=i*10; 					//向数组存数据
	for(i=0;i<5;i++) 	cout<<"No."<<i<<" is:"<<first[i]<<endl; 	//显示数组数据
	second=first;				//语句2：将first拷贝到second(浅拷贝）
	for(i=0;i<5;i++) 	cout<<"No."<<i<<" is:"<<second[i]<<endl; //显示数组数据
	delete [] second;	
     delete [] first;			//语句3：错误：由于浅拷贝带来内存重复释放。
	return 0;
} 
