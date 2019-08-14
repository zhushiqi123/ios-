#include<iostream>
using namespace std;
int main()
{   union utype	{ char  c;   int  i;  float   f;    };	//定义联合类型
	union utype u0;								//声明联合变量
    u0.c='*';										//使用联合变量中的字符型成员
    cout<<"u0.c="<<u0.c<<endl;   u0.i=1000;			//使用联合变量中的整型成员 
    cout<<"u0.i="<<u0.i<<endl;    u0.f=3.1416f;		//使用联合变量中的浮点型成员 
    cout<<"u0.f="<<u0.f<<endl;    utype u1={'A'};	//声明联合变量时初始化
    cout<<"u1.c="<<u1.c<<endl;  					//同时引用联合变量的各成员
    cout<<"u1.i="<<u1.i<<endl;
    cout<<"u1.f="<<u1.f<<endl;
	return 0;
}
