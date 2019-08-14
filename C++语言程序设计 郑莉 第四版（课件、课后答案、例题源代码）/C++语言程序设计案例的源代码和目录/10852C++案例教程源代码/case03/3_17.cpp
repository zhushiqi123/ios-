#include <iostream>
#include <cstdarg>
using namespace std;
int max(int,int...);					//原型声明
int main() 
{	int a,b,c,d,e;
	cout<<"Enter five integers, seperate with space:";	cin>>a>>b>>c>>d>>e;
	cout<<"The maxmum in a and b is:"<<max(2,a,b)<<endl;
	cout<<"The maxmum in five integers is:"<<max(5,a,b,c,d,e)<<endl;
	return 0;
}
int max(int num,int integer...)			//定义参数数目可变的函数
{	va_list ap;	
     int n=integer;
	va_start(ap,integer);
	for(int i=1;i<num;i++)
	{	int t=va_arg(ap,int);
		if(t>n) n=t;
	}
	va_end(ap);
	return n;
}
