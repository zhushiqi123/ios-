#include<iostream>
using namespace std;
//…函数原型声明语句也可以在这里
int main()  
{   float max(float,float);    			//max()函数原型声明语句
    float a,b,Max;   					//变量声明语句
    cout<<" Input a=";    cin>>a;    		//输入参数a
    cout<<" Input b=";    cin>>b;    		//输入参数b
    Max=max(a,b);     					//调用max()函数 
    cout<<"max("<<a<<","<<b<<")="<<Max<<endl;
	return 0;
}
float max(float x,float y) {float z;    z=(x>y)?x:y;    return(z);} //返回值类型为浮点型
