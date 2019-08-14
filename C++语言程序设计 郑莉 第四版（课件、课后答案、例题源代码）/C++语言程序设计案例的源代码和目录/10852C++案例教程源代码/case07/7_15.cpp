#include <iostream> 
using namespace std; 
class Base
{protected:
	int b;
public:
	Base(int i)	{b=i;		cout<<"Base constructor called "<<endl;	}
	void disp() {cout<<"Base: b="<<b<<endl;}
};
class Base1:public Base
{	int b1;
public:
	Base1(int i,int j):Base(j)	{b1=i;	cout<<"Base1 constructor called "<<endl;	}
};
class Base2:public Base
{	int b2;
public:
	Base2(int i,int j):Base(j)	{b2=i;	cout<<"Base2 constructor called "<<endl;	}
};
class Derived:public Base2,public Base1
{	int d;
public:
	Derived(int i,int j,int a,int b):Base1(j,a),Base2(j,b)
	{	d=i;		cout<<"Derived constructor called "<<endl;	}
	void disp() 	{cout<<"Derived: d="<<d<<endl;	}
};
int main()
{	Derived objD(1,2,3,4);	objD.disp();//���1��ͬ������
	objD.Base1::disp();//���2��ʹ�������������::�������������
	objD.Base2::disp();//���3��ʹ�������������::�������������
	//objD.Base::disp();//���4������ʹ�������������::�����ӻ������������
	return 0;
} 
