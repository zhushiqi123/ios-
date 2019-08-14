#include <iostream> 
using namespace std; 
class Base1
{public:
	Base1(int i)	{cout<<"Base1 constructor called "<<i<<endl;	}
	~Base1(void)	{cout<<"Base1 destructor called"<<endl;	}
};
class Base2
{public:
	Base2(int i)	{cout<<"Base2 constructor called "<<i<<endl;	}
	~Base2(void)	{cout<<"Base2 destructor called"<<endl;	}
};
class ExtBase1:virtual public Base1,public Base2	//语句1
{public:
	ExtBase1(int i,int j):Base1(i),Base2(j) 		//语句2：构造函数向基类传递参数
	{		cout<<"ExtBase1 constructor called "<<i<<endl;	}
	~ExtBase1(void)
	{		cout<<"ExtBase1 destructor called"<<endl;	}
};
class ExtBase2:public Base2,virtual public Base1//语句3：扩展基类
{public:
	ExtBase2(int i,int j):Base2(j),Base1(i) 		//语句4：构造函数向基类传递参数
	{		cout<<"ExtBase2 constructor called "<<i<<endl;	}
	~ExtBase2(void)	{cout<<"ExtBase2 destructor called"<<endl;	}
};
class Derived:public ExtBase2,public ExtBase1	//语句5：派生类
{public:
	Derived(int i, int a,int b,int c)
      :ExtBase1(i,a),ExtBase2(i,b),Base1(c)//语句6：构造函数向直接基类和虚基类传递参数
	{		cout<<"Derived constructor called "<<i<<endl;	}
	~Derived(void)
	{		cout<<"Derived destructor called"<<endl;	}
};
int main()
{	Derived objD(1,2,3,4);							//语句7：创建派生类对象
	return 0;
}
