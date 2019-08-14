#include<iostream>
using namespace std;
int sgn(double x) 			//定义符号函数sgn()，其返回值为int类型
{   if (x>0) return(1);    	//返回出口1
    if (x<0) return(-1);   	//返回出口2
    return(0);          	//返回出口3
}
int main()
{   double x;  
	for (int i=0;i<=2;i++) 
	{  cout<<"Input x=";     cin>>x;
       cout<<"sgn("<<x<<")="<<sgn(x)<<endl;
    }
	return 0;
}
