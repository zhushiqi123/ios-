#include <iostream>
using namespace std;
int max(int,int);						//原型声明
void disp(int n=max(100,200))             //默认参数值为函数调用
{ cout<<"The max is: "<<n<<endl;}        
int main() 							//测试带有默认值的函数disp()
{   disp();    disp(100);    disp(200);	return 0;}
int max(int x,int y)	{return(x>=y?x:y);}
