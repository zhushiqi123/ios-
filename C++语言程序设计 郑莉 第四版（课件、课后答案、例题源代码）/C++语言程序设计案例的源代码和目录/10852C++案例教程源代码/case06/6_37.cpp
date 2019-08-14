#include <iostream>
using namespace std;
int main(int argc, char *argv[])		//带命令行参数的main函数
{	for (int i=0;i<argc;i++)	
		cout<<argv[i]<<'\t';		//给argv数组建立下标就可以访问各个参数
	return 0;
} 
