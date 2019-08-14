#include<iostream>
using namespace std;
int divide(double x,double y) 					//函数的定义，其有返回值
{   double z;    z=x/y;    return(z);}
int main()
{   double a=7.,b=3.;
    cout<<"divide(a,b)="<<divide(a,b)<<endl; 		//调用函数divide()
	return 0;
}
