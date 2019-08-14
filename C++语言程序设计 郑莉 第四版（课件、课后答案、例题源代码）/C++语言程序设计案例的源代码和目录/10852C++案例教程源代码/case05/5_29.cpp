#include<iostream>
using namespace std;
#define NUM 100    	//语句1
int main()
{
#if NUM>=100    	//语句2：本行为条件编译命令
		cout<<"This line is compiled\n"; 	//语句3：在调试程序时需要输出这些信息
#else
		cout<<"This line is not compiled\n"; //语句4：在调试程序时需要输出这些信息
#endif    			//语句5：本行为条件编译命令
	return 0;
}
