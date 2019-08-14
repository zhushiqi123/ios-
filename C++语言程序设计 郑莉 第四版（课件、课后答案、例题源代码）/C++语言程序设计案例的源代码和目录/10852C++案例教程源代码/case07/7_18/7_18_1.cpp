#include <iostream> 
using namespace std; 
class Base
{protected:
	int b;
public:
	Base(int i)	{b=i;	}
	void disp() {cout<<"Base: b="<<b<<endl;}
};
class Base1:public Base
{	int b1;
public:
	Base1(int i,int j):Base(j)	{b1=i;	}
};
class Base2:public Base
{	int b2;
public:
	Base2(int i,int j):Base(j)	{b2=i;	}
};
class Derived:public Base2,public Base1
{	int d;
public:
	Derived(int i,int j,int a,int b):Base1(j,a),Base2(j,b)	{d=i;	}
	void disp() 	{cout<<"Derived: d="<<d<<endl;	}
};
int main()
{	Derived objD(1,2,3,4);
	objD.disp();		//���1��ͬ������
	objD.Base::disp();	//���2���ж����ԣ���������objD.Base1::disp()��objD.Base2::disp()
	objD.Base1::disp();//���3��ͨ���������ʶ������Base1�̳�����disp()
	objD.Base2::disp();//���4��ͨ���������ʶ������Base2�̳�����disp()
	return 0;
}
