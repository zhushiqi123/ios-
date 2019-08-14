#include <iostream> 
using namespace std; 
class Base
{public:
	Base(int i)	{cout<<"Base constructor called "<<i<<endl;	}
	Base(Base &b)	{cout<<"Base Copy constructor called "<<endl;	}
	~Base(void)	{cout<<"Base destructor called"<<endl;	}
};
class Base1:public Base
{public:
	Base1(int i,int j):Base(j)	{cout<<"Base1 constructor called "<<i<<endl;	}
	Base1(Base1 &b1):Base(b1)	{cout<<"Base1 Copy constructor called "<<endl;	}
	~Base1(void)	{cout<<"Base1 destructor called"<<endl;	}
};
class Base2
{public:
	Base2(int i)	{cout<<"Base2 constructor called "<<i<<endl;	}
	Base2(Base2 &b2)	{cout<<"Base2 Copy constructor called "<<endl;	}
	~Base2(void)	{cout<<"Base2 destructor called"<<endl;	}
};
class Derived:public Base2,public Base1
{	Base1 member1;	Base2 member2;	Base member;
public:
	Derived(int i, int a,int b,int d,int e,int g)
		:Base1(g,a),member2(e),member1(g,d),Base2(b),member(i)
	{		cout<<"Derived constructor called "<<i<<endl;	}
	Derived(Derived &d):Base1(d),member2(d),member1(d),Base2(d),member(d)
	{		cout<<"Derived Copy constructor called "<<endl;	}
	~Derived(void)	{cout<<"Derived destructor called"<<endl;	}
};
void fun(Derived &d){	cout<<"Function is called!"<<endl;}
int main()
{	Derived objD(1,2,3,4,5,6);
	cout<<"Function is start!"<<endl;
	fun(objD);				//函数调用不需要多级多继承构造函数的调用
	cout<<"Function is end!"<<endl;
	return 0;
} 
