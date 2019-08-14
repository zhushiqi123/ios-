#include <iostream >
#include <cstdlib>
using namespace std;

int add (int x,int y) {	cout<<x<<" + "<<y<<" = ";	return x+y;}	//定义函数add 
int sub (int x,int y) 	{	cout<<x<<" - "<<y<<" = ";	return x-y;}	//定义函数sub 
int mult (int x,int y) {	cout<<x<<" * "<<y<<" = ";	return x*y;}	//定义函数mult
int dev (int x,int y) {	cout<<x<<" / "<<y<<" = ";	return x/y;}	//定义函数dev 

void DispResult(int a, int b, int (*fun)(int,int)){	cout<<fun(a,b)<<endl;}
int main()
{	int (*funp[4])(int,int)={add,sub,mult,dev};	  //语句1：定义一个函数指针数组
	char op;	int a,b;
	cout<<"Please intput the expression a + b:\n";	cin>>a>>op>>b;
	switch(op)
	{case '+':	DispResult(a,b,funp[0]);	break;//语句2：使用funp调用函数add
	case '-':	DispResult(a,b,funp[1]);	break;	 //语句3：使用funp调用函数sub
	case '*':	DispResult(a,b,funp[2]);	break;	 //语句4：使用funp调用函数mult
	case '/':	DispResult(a,b,funp[3]);	break;	 //语句5：使用funp调用函数dev
	default:	cout<<"Operator is illegal;\n";
	}
	return 0;
}
