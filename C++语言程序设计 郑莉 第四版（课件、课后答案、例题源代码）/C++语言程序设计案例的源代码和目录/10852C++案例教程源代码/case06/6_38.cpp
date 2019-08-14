#include <iostream>
#include <cstdlib>
using namespace std;
unsigned long factor(int n)				//阶乘函数
{	if(n==0) return 1;	return (n*factor(n-1));}	
int main(int argc, char *argv[])			//带命令行参数的main函数
{	if(argc !=2)	{	cout<<"Usage: zrf n<cr>";	return 1;	}
	cout<<factor(atoi(argv[1]))<<endl;	//将命令行数字字符串转换为int类型
	return 0;
}
