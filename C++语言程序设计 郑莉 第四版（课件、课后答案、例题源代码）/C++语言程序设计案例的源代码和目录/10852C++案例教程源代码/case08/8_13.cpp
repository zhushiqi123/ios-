#include <iostream>  
#include<string>  
using namespace std;
class CSimple
{   	long m_tData;	
public:    
	CSimple(){}               				//1默认形式的构造函数 	
	~CSimple(){}              				//2默认形式的析构函数
	CSimple(const CSimple& r) ;  			//3拷贝构造函数
	CSimple& operator=(const CSimple& r); 	//4赋值运算符函数
	inline   CSimple* operator&();        	//5取可变对象地址运算符函数
	inline  const	CSimple* operator&()const;	//6取只读对象地址运算符函数	
}; 
int  sum=0;								//设置sum变量记录取地址运算符函数调用情况
CSimple::CSimple(const CSimple& r)    {	memcpy(this,&r,sizeof(CSimple));	}
CSimple& CSimple::operator=(const CSimple& r) 
{	if(this==&r)  return *this; 			//函数名为operator=的双目运算符函数
	memcpy(this,&r,sizeof(CSimple));
	return *this; 
}                        
//函数名为operator&的单目运算符函数
inline  CSimple* CSimple::operator&()	     {sum=1;	return this;}
inline const  CSimple* CSimple::operator&() const  {sum=2;	return this;} 
int main()
{	CSimple   v;               				//定义对象v
	CSimple*  pv=&v;	          			//取对象地址，调用operator&()
	cout<<"The sum is:"<<sum<<"\n";	
	const	CSimple   c;          			//定义只读对象c，只读指针pc
	const   CSimple*  pc=&c;      			//取只读对象地址，调用operator&() const
	cout<<"The sum is:"<<sum<<"\n";	sum=0;
	pc=v.operator&() ;            			//显式调用名为operator&的取地址运算符函数
	cout<<"The sum is:"<<sum<<"\n";
	return 0;
}
