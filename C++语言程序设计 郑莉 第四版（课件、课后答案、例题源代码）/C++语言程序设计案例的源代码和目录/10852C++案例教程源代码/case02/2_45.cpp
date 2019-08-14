#include<iostream>
using namespace std;
int main()  
{   struct s_type  {  short  i;  float	 x;   } sx={1000,1.1111f};
	union   u_type {  short  i;  float  x;   } ux={10000};
    //输出结构类型和结构变量的有关信息
    cout<<"sizeof(struct s_type)="<<sizeof(struct s_type)<<endl;
    cout<<"sx.i="<<sx.i<<endl <<"sx.x="<<sx.x<<endl;
    cout<<"sizeof(sx)="<<sizeof(sx)<<endl;
    //输出联合类型和联合变量的有关信息
    cout<<"sizeof(union u_type)="<<sizeof(union u_type)<<endl;
    ux.i=200;    			cout<<"ux.i="<<ux.i<<endl;  //输出联合变量ux 的i成员
    ux.x=1.23456f;    	cout<<"ux.x="<<ux.x<<endl;  //输出联合变量ux 的x成员
    cout<<"sizeof(ux)="<<sizeof(ux)<<endl;
	return 0;
}
