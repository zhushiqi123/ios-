#include<iostream>
using namespace std;
double add(double x,double y) { double z;    z=x+y;    return(z);} //定义有参函数
int main()
{   double a=0.5, b=1.0;
    cout<<"add(a,b)="<<add(a,b)<<endl; 		//调用有参函数add()
	return 0;
}
