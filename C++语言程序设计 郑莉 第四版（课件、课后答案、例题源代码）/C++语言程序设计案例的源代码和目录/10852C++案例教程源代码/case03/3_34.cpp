#include <iostream>
#include <cmath>
using namespace std;

struct complex
{
   double real;
   double imag;
};

int fun(unsigned n, int &zero)  	//完成统计功能的函数，引用作形参，传回统计结果
{ 
	int count=0,max=0,t;
    do{
           t=n%10;       	//由低位开始逐个取出各位数字
     if(t==0)        	//如果该位为0，则计数
           count++;
           if(max<t) max=t;	//max始终保持当前找到的最大值
           n=n/10;
	}while(n);
    zero=count;
    return max;				//返回最大值
}

int fun(int n, int &zero)  	//重载函数
{ 
    return fun(unsigned(abs(n)),zero);				
}
int fun(double d, int &zero)  	//重载函数
{ 
    int n1, n2;
    n1=d;					//取浮点数的整数部分
    n2=(d-n1)*10;				//取小数部分最高位
    if (n2>=5) n1++;			//四舍五入
    return fun( n1, zero );		//调用重载函数un( n1, zero )完成统计，返回最大值
}

int fun(complex c, int &zero)  	//重载函数
{ 
    double d;	
    d = c.real;				//取浮点数的整数部分
    return fun( d, zero );		//调用重载函数un( n1, zero )完成统计，返回最大值
}
int main()
{ 
	unsigned uNum; 
    int intNum;
    int zero,max;
    double dNum;
    complex c;
    cout<<"\nEnter an unsigned number: ";
    cin>>uNum;
    max = fun( uNum, zero );
    cout<<"\nThe result of unsigned: max="<<max<<"  zero="<<zero<<endl;
    cout<<"\nEnter a signed number: ";
    cin>>intNum;
    max = fun( intNum, zero );
 cout<<"\nThe result of int: max="<<max<<"  zero="<<zero<<endl;
    cout<<"\nEnter a double: ";
    cin>>dNum;
    max = fun(dNum, zero );
    cout<<"\nThe result of double: max="<<max<<"  zero="<<zero<<endl;
    cout<<"\nEnter a complex: ";
    cin>>c.real>>c.imag;
    max = fun(c, zero );
    cout<<"\nThe result of complex: max="<<max<<"  zero="<<zero<<endl;
    return 0;
}
