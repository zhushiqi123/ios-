#include <iostream> 
using namespace std; 
int main() 
{	int *pi=new int(88),*qi;		//声明两个整型指针变量
	cout<<"The address is as follows:"<<endl <<"pi="<<pi<<", qi="<<qi<<endl;
	qi=pi;						//语句1：浅拷贝
	delete pi;
	delete qi;					//错误：由于浅拷贝带来内存重复释放。
	cout<<"pi="<<pi<<", qi="<<qi<<endl;
	return 0;
}
