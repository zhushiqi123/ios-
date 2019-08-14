#include<iostream>
using namespace std;
class ClassB 
{public:	
	int m_b;
	ClassB(int n=1) 	{m_b=n;	cout<<m_b<<".ClassB::ClassB(),this="<<this<<endl;	}
	~ClassB()   	{  	cout<<m_b<<".ClassB::~ClassB()\n";	}		
};
class ClassC 
{ public:	
	int m_c;  
	ClassC(int n=2) 	{m_c=n;	cout<<m_c<<".ClassC::ClassC(),this="<<this<<endl;	}
	~ClassC()      	{	cout<<m_c<<".ClassC::~ClassC()\n";   	}
	void Disp()     	{  	cout<<"Disp m_c="<<m_c<<",this="<<this<<endl; 	}
};
void funA(int k)
{	if(k==999) 								//ֱ���׳�һ����������
	{	cout<<"send local Objc with k="<<999<<endl; throw ClassC(k); }
	ClassB objb(2);                              	//�м䶨��һ���ֲ�����objb2
	ClassC *pObjc=new ClassC(k);                	//����һ��Heap�ռ�Ķ���
	cout<<"send Heap obj with k="<<k<<endl;
	throw pObjc;                              	//�޹����������׳�����ָ��
	cout<<"this code area is dead block\n";        //������
	delete pObjc;	
}
void funB(int k)
{	cout<<"Start regular routine, Enter k="<<k<<endl;
	try	{ 	ClassB objb(1);  funA(k);  }    		//����ֲ�����objb
	catch(ClassC objc )                        	//������ֵ�������ڴ�����
	{	cout<<"local Objc received\n";	objc.Disp();}
	catch(ClassC *p=NULL )                   		//���ܶ���ָ�����ڴ����� 
	{	if(p!=NULL)		
         { cout<<"Heap Obj received\n";	p->Disp();	delete p;	}}	
}
void main()	{  	funB(999);}
