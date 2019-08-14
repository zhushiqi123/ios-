#include<iostream>
using namespace std;
#define RUN    						//语句1：在调试程序时使之成为注释行
int main()
{	int x=1,y=2,z=3;
	#ifndef RUN    						//语句2：本行为条件编译命令
		cout<<"x="<<x<<"，y="<<y<<"，z="<<z; //语句3：在调试程序时需要输出信息
	#endif    							//语句4：本行为条件编译命令
	cout<<"x*y*z="<<x*y*z<<endl;
	return 0;
}
