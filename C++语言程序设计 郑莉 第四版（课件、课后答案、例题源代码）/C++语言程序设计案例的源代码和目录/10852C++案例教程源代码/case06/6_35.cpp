#include <iostream >
#include <cstdlib>
using namespace std;
int add (int x,int y) {	cout<<x<<" + "<<y<<" = ";	return x+y;}	//定义函数add 
int sub (int x,int y) 	{	cout<<x<<" - "<<y<<" = ";	return x-y;}	//定义函数sub 
int mult (int x,int y) {	cout<<x<<" * "<<y<<" = ";	return x*y;}	//定义函数mult
int dev (int x,int y) {	cout<<x<<" / "<<y<<" = ";	return x/y;}	//定义函数dev 
int main()
{	int (*funp)(int,int);						//定义一个函数指针
	char op;	int a,b;
	cout<<"Please intput the expression a + b:\n";	cin>>a>>op>>b;
	switch(op)
	{case '+':	funp=add;		break;	//将函数add的入口地址赋给指针funp
	case '-':	funp=sub;		break; 	//将函数sub的入口地址赋给指针funp
	case '*':	funp=mult;		break; 	//将函数mult的入口地址赋给指针funp
	case '/':	funp=dev;		break;	//将函数dev的入口地址赋给指针funp
	default:	cout<<"Operator is illegal;\n";
	}
	cout<<funp(a,b)<<endl;
	return 0;
}
