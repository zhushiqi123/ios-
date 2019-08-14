#include <iostream>  
#include<string>  
using namespace std;
class CSimple
{   	long m_tData;	
public:    
	CSimple(){}               				//1Ĭ����ʽ�Ĺ��캯�� 	
	~CSimple(){}              				//2Ĭ����ʽ����������
	CSimple(const CSimple& r) ;  			//3�������캯��
	CSimple& operator=(const CSimple& r); 	//4��ֵ���������
	inline   CSimple* operator&();        	//5ȡ�ɱ�����ַ���������
	inline  const	CSimple* operator&()const;	//6ȡֻ�������ַ���������	
}; 
int  sum=0;								//����sum������¼ȡ��ַ����������������
CSimple::CSimple(const CSimple& r)    {	memcpy(this,&r,sizeof(CSimple));	}
CSimple& CSimple::operator=(const CSimple& r) 
{	if(this==&r)  return *this; 			//������Ϊoperator=��˫Ŀ���������
	memcpy(this,&r,sizeof(CSimple));
	return *this; 
}                        
//������Ϊoperator&�ĵ�Ŀ���������
inline  CSimple* CSimple::operator&()	     {sum=1;	return this;}
inline const  CSimple* CSimple::operator&() const  {sum=2;	return this;} 
int main()
{	CSimple   v;               				//�������v
	CSimple*  pv=&v;	          			//ȡ�����ַ������operator&()
	cout<<"The sum is:"<<sum<<"\n";	
	const	CSimple   c;          			//����ֻ������c��ֻ��ָ��pc
	const   CSimple*  pc=&c;      			//ȡֻ�������ַ������operator&() const
	cout<<"The sum is:"<<sum<<"\n";	sum=0;
	pc=v.operator&() ;            			//��ʽ������Ϊoperator&��ȡ��ַ���������
	cout<<"The sum is:"<<sum<<"\n";
	return 0;
}
