#include <iostream>
using namespace std;
class Base 
{public:		
	virtual void fun();	//fun()���麯��
private:  	 
	long m_nx; 
};
void Base::fun()	{cout<<"Base="<<sizeof(Base)<<endl;}
class Derived: public Base 
{	long m_ny; 
	void fun();	    		//������ĸ��ǰ汾��˽�е�	
};  
void Derived::fun(){ cout<<"Derived="<<sizeof(Derived)<<endl;	}
void Showv(Base objx){   objx.fun(); }    //�����βε����麯��,��̬��
void Show(Base* pBase){  pBase->fun();}  	//ָ���β���ʽ�����麯������̬��
void Show(Base& r){ r.Base::fun(); } 		//���1�������β���ʽ���û����麯������̬��	
void main()  
{	Base* pobjx=new Base();	
	Derived objy;
	int k;	cout<<"Please input k:";   cin>>k;
	if(k==1)	{ Show(pobjx);  Show(&objy);}  	// k=1����ָ���βε�Show�汾
	else     { Show(*pobjx); Show(objy);  } 	// k������1���������β�Show�汾
   Showv(objy);      // Showv������ʵ�������������objy,�β��ǻ������objx
}
