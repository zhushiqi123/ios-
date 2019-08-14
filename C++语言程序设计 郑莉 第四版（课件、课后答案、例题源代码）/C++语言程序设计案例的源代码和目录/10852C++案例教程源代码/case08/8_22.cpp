#include <iostream> 
using namespace std;
class Base;           //类Base的前置说明，满足下面定义语句的需要
void (Base::*pfm)();   //定义全局的void (Base::*)()型的指向成员函数的指针pfm
class Base	
{ 	virtual  void f()=0;	           //私有属性的纯虚函数f
public:
	static void set(){pfm=&Base::f;}// 成员函数指针pfm指向私有的虚成员函数
};
class Derived:public Base{ 	void f(){cout<<"Derived::f();\n";}	};       
int main()
{	Derived objd;                    	//定义派生类对象objd
	Base*pobjb=&objd;             	//派生类对象地址向上映射到基对象指针
	Base::set();                    	//调用静态成员函数,得到pfm=&Base::f;
   	(pobjb->*pfm)();              	//等价于pObjb->f();
	return 0;
}
