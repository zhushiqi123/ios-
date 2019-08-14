#include <iostream> 
using namespace std; 
class Base
{protected:
	int b;
public:
	Base(int i)	{b=i; cout<<"Base constructor called "<<endl;	}
	void disp() {cout<<"Base: b="<<b<<endl;}
};
class ExtBase:public Base,public Base//���1�����󣬲��ܴ�ͬһ������̳�һ������
{	int eb;
public:
	ExtBase(int i,int j):Base(j){eb=i; cout<<"ExtBase constructor called "<<endl;	}
};
class Derived:public ExtBase,public Base//���2�����󣬲���ͬʱʹ�û������չ����
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
