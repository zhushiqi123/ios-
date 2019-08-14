#include <iostream> 
using namespace std; 
class Base
{protected:
	int b;
public:
	Base(int i)	{b=i; cout<<"Base constructor called "<<endl;	}
	void disp() {cout<<"Base: b="<<b<<endl;}
};
class ExtBase:public Base,public Base//语句1：错误，不能从同一个基类继承一次以上
{	int eb;
public:
	ExtBase(int i,int j):Base(j){eb=i; cout<<"ExtBase constructor called "<<endl;	}
};
class Derived:public ExtBase,public Base//语句2：错误，不能同时使用基类和扩展基类
{	int d;
public:
	Derived(int i,int a,int b):ExtBase(i,a),Base(b)
	{	d=i;		cout<<"Derived constructor called "<<endl;	}
	void disp() 	{	cout<<"Derived: d="<<d<<endl;	}
};
int main()
{	Derived objD(1,2,3);	objD.disp();
	objD.Base::disp();	objD.ExtBase::disp();
	return 0;
}
