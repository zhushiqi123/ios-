#include <iostream> 
using namespace std; 
class Base
{protected:
	int b;
public:
	Base(int i) {b=i; cout<<"Base constructor called "<<endl; }
	void disp() {cout<<"Base: b="<<b<<endl;}
};
class ExtBase:public Base
{	int eb;
public:
	ExtBase(int i,int j):Base(j) {eb=i; cout<<"ExtBase constructor called "<<endl;	}
	void disp() {cout<<"ExtBase: eb="<<eb<<endl;}
};
class Derived:public ExtBase
{	int d;
public:
	Derived(int i,int a):ExtBase(i,a) {d=i; cout<<"Derived constructor called "<<endl;	}
	void disp() { cout<<"Derived: d="<<d<<endl; }
};
int main()
{	Derived objD(1,2);	 objD.disp();
	ExtBase obje=objD;  obje.disp();	//语句1：派生类对象可以向直接基类的对象赋值
	Base objb(obje); objb.disp();	//语句2：派生类的对象可以初始化基类的对象
	ExtBase &re=objD; re.disp();	//语句3：派生类的对象可以初始化直接基类的引用
	Base &rb=objD; rb.disp();		//语句4：派生类的对象可以初始化间接基类的引用
	ExtBase *pe=&objD; pe->disp();	//语句5：可以将派生类的对象的地址赋给基类指针
	Base *pb=&objD; pb->disp();		//语句6：可以将派生类的对象的地址赋给间接基类指针
	return 0;
}  
