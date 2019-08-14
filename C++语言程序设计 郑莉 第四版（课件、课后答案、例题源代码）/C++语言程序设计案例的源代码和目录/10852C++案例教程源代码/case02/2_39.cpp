#include<iostream>
using namespace std;
int main()
{	 enum color { RED=3,YELLOW=6, BLUE=9};//声明枚举类型并指定其枚举元素的值
    cout<<"RED="<<RED<<endl;    	     //输出枚举常量 
    cout<<"YELLOW="<<YELLOW<<endl;
    cout<<"BLUE="<<BLUE<<endl;
    color c1=YELLOW;    		    //声明枚举变量并初始化
    color c2;        				
    c2=c1;    c1=BLUE; 				//给枚举变量的赋值
    cout<<"c1="<<c1<<endl;            //输出枚举变量
    cout<<"c2="<<c2<<endl;
    //c1=100;   					//错误!
    //c2=6;      					//错误!
    c2=BLUE;                    	//枚举变量的赋值运算
    cout<<"c1<c2="<<(c1<c2)<<endl;  	//枚举变量的关系运算
	return 0;
}
