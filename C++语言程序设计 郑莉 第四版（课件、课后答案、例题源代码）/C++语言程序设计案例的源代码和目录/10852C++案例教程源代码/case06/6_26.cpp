#include <iostream> 
using namespace std; 
int main()
{	int i=10,j=20;
	const int* pi=&i;	//指向常量的指针
	//*pi=20;			//错误1：不能通过pi改变所指向变量的值
	cout<<"pi="<<pi<<"*pi="<<*pi<<endl;
	int* const pj=&j;	//指针类型的常量
	//pj=pi;			//错误2：不能修改pj的值
	cout<<"pj="<<pj<<"*pj="<<*pj<<endl;
	return 0;
}
