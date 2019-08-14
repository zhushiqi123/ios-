#include<iostream>
using namespace std;
int main()
{	int *pi;
	//pi=3.5;//语句1：错误，没有内存单元被分配给*pi
	int i=3;
	pi=&i;//语句2：通过将变量的地址赋给指针变量进行初始化
	cout<<"The address is:"<<pi<<", and the value is:"<<*pi<<endl;
	float *pf; 	pf=new float;//语句3：分配一个float的内存单元
	*pf=3.6f;//语句4：正确初始化，*qf已经被分配了内存空间
	cout<<"The address is:"<<pf<<", and the value is:"<<*pf<<endl;
	double *pd;	pd=new double(3.7);//语句5：分配一个double的内存单元并初始化
	cout<<"The address is:"<<pd<<", and the value is:"<<*pd<<endl;
	return 0;
} 
