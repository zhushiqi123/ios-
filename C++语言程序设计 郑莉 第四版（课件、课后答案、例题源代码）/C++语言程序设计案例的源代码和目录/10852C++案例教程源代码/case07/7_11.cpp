#include <iostream> 
using namespace std; 
class Base
{public:
	Base(int i)	{cout<<"Base constructor called "<<i<<endl;	}
	~Base(void)	{cout<<"Base destructor called"<<endl;	}
};
class Base1:public Base
{public:
	Base1(int i,int j):Base(j)	{cout<<"Base1 constructor called "<<i<<endl;	}
	~Base1(void)	{cout<<"Base1 destructor called"<<endl;	}
};
class Base2
{public:
	Base2(int i)	{cout<<"Base2 constructor called "<<i<<endl;	}
	~Base2(void)	{cout<<"Base2 destructor called"<<endl;	}
};
class Base3
{public:
	Base3(int i)	{cout<<"Base3 constructor called "<<i<<endl;	}
	~Base3(void)	{cout<<"Base3 destructor called"<<endl;	}
};
class Derived:public Base2,public Base1,public Base3
{	Base3 member3;	Base1 member1;	Base2 member2;	Base member;
public:
	Derived(int i, int a,int b,int c,int d,int e,int f,int g)
		:Base1(g,a),member2(e),member1(g,d),Base2(b),member3(f),Base3(c),member(i)
	{	cout<<"Derived constructor called "<<i<<endl;	}
	~Derived(void)	{cout<<"Derived destructor called"<<endl;	}
};
int main(){	Derived objD(1,2,3,4,5,6,7,8);	return 0;} 
