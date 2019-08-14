#include <iostream> 
using namespace std; 
class Base1
{public:
	Base1(void)	{cout<<"Base1 constructor called"<<endl;}
	~Base1(void)	{cout<<"Base1 destructor called"<<endl;}
};
class Base2
{public:
	Base2(void)	{cout<<"Base2 constructor called"<<endl;}
	~Base2(void)	{cout<<"Base2 destructor called"<<endl;}
};
class Base3
{public:
	Base3(void)	{cout<<"Base3 constructor called"<<endl;}
	~Base3(void)	{cout<<"Base3 destructor called"<<endl;}
};
class Derived:public Base2,public Base1,public Base3
{	Base3 member3;	Base1 member1;	Base2 member2;
public:
	Derived(void)	{cout<<"Derived constructor called"<<endl;	}
	~Derived(void)	{cout<<"Derived destructor called"<<endl;	}
};
int main(){	Derived objD;		return 0;}
