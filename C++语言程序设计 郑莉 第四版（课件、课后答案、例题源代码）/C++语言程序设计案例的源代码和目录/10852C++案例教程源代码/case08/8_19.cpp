#include <iostream>
using namespace std;
class Base 
{public:		
	virtual void fun();	//fun()是虚函数
private:  	 
	long m_nx; 
};
void Base::fun()	{cout<<"Base="<<sizeof(Base)<<endl;}
class Derived: public Base 
{	long m_ny; 
	void fun();	    		//派生类的覆盖版本是私有的	
};  
void Derived::fun(){ cout<<"Derived="<<sizeof(Derived)<<endl;	}
void Showv(Base objx){   objx.fun(); }    //对象形参调用虚函数,静态绑定
void Show(Base* pBase){  pBase->fun();}  	//指针形参隐式调用虚函数，动态绑定
void Show(Base& r){ r.Base::fun(); } 		//语句1：引用形参显式调用基类虚函数，静态绑定	
void main()  
{	Base* pobjx=new Base();	
	Derived objy;
	int k;	cout<<"Please input k:";   cin>>k;
	if(k==1)	{ Show(pobjx);  Show(&objy);}  	// k=1调用指针形参的Show版本
	else     { Show(*pobjx); Show(objy);  } 	// k不等于1调用引用形参Show版本
   Showv(objy);      // Showv调用中实参是派生类对象objy,形参是基类对象objx
}
