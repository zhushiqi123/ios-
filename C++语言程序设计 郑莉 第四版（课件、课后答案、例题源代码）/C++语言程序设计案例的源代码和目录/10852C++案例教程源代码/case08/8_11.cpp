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
{	CType a(1);	fun(a) ;  // fun(a)调用fun(int)，隐含启动类型转换函数operator int() 
    a.operator double();	//显式调用类型转换函数operator double()
	a=CType(2);		 	//显式调用构造函数CType(double)
	cout<<(int)a<<" , "<<(double)a<<endl; //先计算表达式(double)a，然后计算(int)a 
	return 0;
}  
