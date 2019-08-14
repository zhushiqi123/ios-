#include <iostream> 
using namespace std; 
class Base
{protected:
	int b;
public:
	Base(int i) {b=i; cout<<"Base constructor called "<<endl; }
	void disp() {cout<<"Base: b="<<b<<endl;}
};
class ExtBase:public Base
{	int eb;
public:
	ExtBase(int i,int j):Base(j) {eb=i; cout<<"ExtBase constructor called "<<endl;	}
	void disp() {cout<<"ExtBase: eb="<<eb<<endl;}
};
class Derived:public ExtBase
{	int d;
public:
	Derived(int i,int a):ExtBase(i,a) {d=i; cout<<"Derived constructor called "<<endl;	}
	void disp() { cout<<"Derived: d="<<d<<endl; }
};
int main()
{	Derived objD(1,2);	 objD.disp();
	ExtBase obje=objD;  obje.disp();	//���1����������������ֱ�ӻ���Ķ���ֵ
	Base objb(obje); objb.disp();	//���2��������Ķ�����Գ�ʼ������Ķ���
	ExtBase &re=objD; re.disp();	//���3��������Ķ�����Գ�ʼ��ֱ�ӻ��������
	Base &rb=objD; rb.disp();		//���4��������Ķ�����Գ�ʼ����ӻ��������
	ExtBase *pe=&objD; pe->disp();	//���5�����Խ�������Ķ���ĵ�ַ��������ָ��
	Base *pb=&objD; pb->disp();		//���6�����Խ�������Ķ���ĵ�ַ������ӻ���ָ��
	return 0;
}  
