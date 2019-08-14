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
{	if(k==999) 								//直接抛出一个无名对象
	{	cout<<"send local Objc with k="<<999<<endl; throw ClassC(k); }
	ClassB objb(2);                              	//中间定义一个局部对象objb2
	ClassC *pObjc=new ClassC(k);                	//定义一个Heap空间的对象
	cout<<"send Heap obj with k="<<k<<endl;
	throw pObjc;                              	//无过滤条件的抛出对象指针
	cout<<"this code area is dead block\n";        //死码区
	delete pObjc;	
}
void funB(int k)
{	cout<<"Start regular routine, Enter k="<<k<<endl;
	try	{ 	ClassB objb(1);  funA(k);  }    		//定义局部变量objb
	catch(ClassC objc )                        	//接受数值对象的入口处理器
	{	cout<<"local Objc received\n";	objc.Disp();}
	catch(ClassC *p=NULL )                   		//接受对象指针的入口处理器 
	{	if(p!=NULL)		
         { cout<<"Heap Obj received\n";	p->Disp();	delete p;	}}	
}
void main()	{  	funB(999);}
