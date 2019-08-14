#include <iostream> 
using namespace std; 
class Base	{  
protected:
	int b;
public:
	Base(int i)	{b=i;	}
	void disp() {cout<<"Base: b="<<b<<endl;}
  };
class Base1:virtual public Base	
{  int b1;
public:
	Base1(int i,int j):Base(j)	{b1=i;	}
 };
class Base2:virtual public Base 
	{  	int b2;
public:
	Base2(int i,int j):Base(j)	{b2=i;	}
  };
class Derived:public Base2,public Base1
	{ 
	int d;
public:
	Derived(int i,int j,int a,int b):Base(j),Base1(j,a),Base2(j,b)
	{d=i;	}
	void disp() 	{cout<<"Derived: d="<<d<<endl;	}
 };
int main()
{	Derived objD(1,2,3,4);	objD.disp();//语句1：同名隐藏
	objD.Base::disp();	//语句2：通过虚基类解决了二义性问题
	objD.Base1::disp();//语句3：通过作用域标识符访问Base的disp()
	objD.Base2::disp();//语句4：通过作用域标识符访问Base的disp()
	return 0;
}  
