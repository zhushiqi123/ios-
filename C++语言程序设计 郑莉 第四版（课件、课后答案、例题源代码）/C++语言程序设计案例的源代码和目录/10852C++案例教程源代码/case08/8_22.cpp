#include <iostream> 
using namespace std;
class Base;           //��Base��ǰ��˵�����������涨��������Ҫ
void (Base::*pfm)();   //����ȫ�ֵ�void (Base::*)()�͵�ָ���Ա������ָ��pfm
class Base	
{ 	virtual  void f()=0;	           //˽�����ԵĴ��麯��f
public:
	static void set(){pfm=&Base::f;}// ��Ա����ָ��pfmָ��˽�е����Ա����
};
class Derived:public Base{ 	void f(){cout<<"Derived::f();\n";}	};       
int main()
{	Derived objd;                    	//�������������objd
	Base*pobjb=&objd;             	//����������ַ����ӳ�䵽������ָ��
	Base::set();                    	//���þ�̬��Ա����,�õ�pfm=&Base::f;
   	(pobjb->*pfm)();              	//�ȼ���pObjb->f();
	return 0;
}
