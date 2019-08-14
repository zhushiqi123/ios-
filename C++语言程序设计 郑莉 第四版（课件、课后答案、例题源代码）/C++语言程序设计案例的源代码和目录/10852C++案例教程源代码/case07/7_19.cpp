#include <iostream> 
using namespace std; 
class Base
{public:
	Base(int i)	{cout<<"Base constructor called "<<i<<endl;	}
	~Base(void)	{cout<<"Base destructor called"<<endl;	}
};
class Base1:virtual public Base
{public:
	Base1(int i,int j):Base(j)	//调用虚基类的构造函数
    {	cout<<"Base1 constructor called "<<i<<endl;	}
	~Base1(void)	{cout<<"Base1 destructor called"<<endl;	}
};
class Base2:virtual public Base
{public:
	Base2(int i,int j):Base(j) //调用虚基类的构造函数
    {	cout<<"Base2 constructor called "<<i<<endl;	}
	~Base2(void)	{cout<<"Base2 destructor called"<<endl;	}
};
class Derived:public Base2,public Base1
{public:
	Derived(int i, int a,int b,int c)
            :Base1(i,a),Base2(i,b),Base(c) //调用直接基类和虚基类的构造函数
	{	cout<<"Derived constructor called "<<i<<endl;	}
	~Derived(void)	{cout<<"Derived destructor called"<<endl;	}
};
int main(){	Derived objD(1,2,3,4);	return 0;}
