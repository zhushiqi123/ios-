#include <iostream> 
using namespace std; 
class Base1
{	int b1;
public:
	Base1(int i)	{b1=i;	cout<<"Base1 constructor called "<<endl;	}
	void disp() {cout<<"Base1: b1="<<b1<<endl;}
};
class Base2
{	int b2;
public:
	Base2(int i)	{b2=i;	cout<<"Base2 constructor called "<<endl;	}
	void disp() {cout<<"Base2: b2="<<b2<<endl;}
};
class Derived:public Base2,public Base1
{	int d;
public:
	Derived(int i,int a,int b):Base1(a),Base2(b)
	{	d=i;		cout<<"Derived constructor called "<<endl;	}
	void disp() 	{cout<<"Derived: d="<<d<<endl;	}
};
int main()
{	Derived objD(1,2,3);
	objD.disp();		//���1��ͬ������
	objD.Base1::disp();//���2��ʹ�������������::�������������
	objD.Base2::disp();//���3��ʹ�������������::�������������
	return 0;
}
