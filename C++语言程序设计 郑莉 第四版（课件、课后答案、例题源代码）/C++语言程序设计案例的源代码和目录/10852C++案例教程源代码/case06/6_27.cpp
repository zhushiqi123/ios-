#include <iostream> 
using namespace std; 
int main()
{	//void vobj;				//错误1：不能声明void类型的变量
	void *pv;					//正确：可以声明void类型的指针
	int  i=10,*pi; 
	pv = &i;					//void类型指针指向整型变量
	pi = (int *)pv;  			//类型强制转换：void类型指针赋值给int类型指针
	cout<<"pv="<<pv<<endl;
	//cout<<"*pv="<<*pv<<endl; //错误2：不能使用取值操作符作用于void指针变量
	cout<<"pi="<<pi<<endl <<"*pi="<<*pi<<endl;
	return 0;
}
