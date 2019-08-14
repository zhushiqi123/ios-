#include<iostream>
using namespace std;
double add(double x,double y) //函数的定义，其有返回值
{   double z;    z=x+y;
    cout<<x<<"+"<<y<<"="<<z<<endl;
    return(z);
}
int main()
{   double a=0.5,b=1.0;
	//以不同参数形式调用函数add()
    cout<<"add(1.5,2.5)="<<add(1.5,2.5)<<endl;
    cout<<"add(a,b)="<<add(a,b)<<endl;
    cout<<"add(2*a,a+b)="<<add(2*a,a+b)<<endl;
  	//以表达式方式调用函数add()
   	double c=2*add(a,b);   	cout<<"c="<<c<<endl;
	//以语句方式调用函数add()
	add(2*a,b);
	//以函数参数形式调用函数add()
   	cout<<" add(a, add(a,b))="<<add(a, add(a,b))<<endl; 
	return 0;
}
