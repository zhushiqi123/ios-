#include <iostream>
#include "MiniComplex.h"
using namespace std;
int main()
{	MiniComplex num1(23,34), num2(56,35);
	cout<<"Initial Value of Num1 = "<<num1<<"\nInitial Value of Num2 = "<<num2<<endl;
	cout<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;//使用重载的加号运算符
	cout<<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;//使用重载的减号运算符
	cout<<num1<<" * "<<num2<<" = "<<num1 * num2<<endl;//使用重载的乘号运算符
	cout<<num1<<" / "<<num2<<" = "<<num1 / num2<<endl;//使用重载的除号运算符
	return 0;	
}
