#include <iostream>
using namespace std;
class CType 
{public:	
	explicit CType( double d)	{ m_d=d ;	m_expre=(int)d+1;	cout<<"CType():\n";} 	
	operator  double()		{ cout<<"double:"<<(int)m_d<<endl;	return m_d; 	}
	operator  int()	{ cout<<"int:"<<m_expre<<endl;	return  m_expre; 	}
protected:
	double m_d;   
	int    m_expre ;  
};
int fun(int n){	return n;}
int main()
{	CType a(1);	fun(a) ;  // fun(a)����fun(int)��������������ת������operator int() 
    a.operator double();	//��ʽ��������ת������operator double()
	a=CType(2);		 	//��ʽ���ù��캯��CType(double)
	cout<<(int)a<<" , "<<(double)a<<endl; //�ȼ�����ʽ(double)a��Ȼ�����(int)a 
	return 0;
}  
