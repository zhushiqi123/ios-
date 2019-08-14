#include <iostream> 
using namespace std; 
class Base1
{public:
	Base1(int i)	{cout<<"Base1 constructor called "<<i<<endl;	}
	Base1(Base1 &b1)	{cout<<"Base1 Copy constructor called "<<endl;	}
	~Base1(void)	{cout<<"Base1 destructor called"<<endl;	}
};
class Base2
{public:
	Base2(int i)	{cout<<"Base2 constructor called "<<i<<endl;	}
	Base2(Base2 &b2)	{cout<<"Base2 Copy constructor called "<<endl;	}
	~Base2(void)	{cout<<"Base2 destructor called"<<endl;	}
};
class Derived:public Base2,public Base1
{	Base1 member1;	Base2 member2;
public:
	Derived(int i, int a,int b,int c,int d):Base1(a),member2(c),member1(d),Base2(b)
	{		cout<<"Derived constructor called "<<i<<endl;	}
	Derived(Derived &d):Base1(d),member2(d),member1(d),Base2(d)
	{		cout<<"Derived Copy constructor called "<<endl;	}
	~Derived(void)	{cout<<"Derived destructor called"<<endl;	}
};
void fun(Derived d){cout<<"Function is called!"<<endl;}
int main()
{	Derived objD(1,2,3,4,5);
	cout<<"Function is start!"<<endl;
	fun(objD);						//函数调用中需要多继承类构造函数的调用
	cout<<"Function is end!"<<endl;
	return 0;
} 
