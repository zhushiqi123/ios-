#include <iostream>
using namespace std;
int main()
{   int nn=10,mm;
    double xx=4.741,yy; 
    cout<<"nn*xx="<<nn*xx<<endl; 							//表达式类型转换
    mm=xx;    yy=nn;    								//赋值类型转换
    cout<<"mm="<<mm<<endl <<"yy="<<yy<<endl;
    cout<<"int(xx)="<<int(xx)<<endl <<"(int)xx="<<(int)xx<<endl;    //强制类型转换
    cout<<"int(1.412+xx)="<<int(1.412+xx)<<endl; 				//强制类型转换
    cout<<"(int)1.412+xx="<<(int)1.412+xx<<endl;				//强制类型转换
	return 0;
}
