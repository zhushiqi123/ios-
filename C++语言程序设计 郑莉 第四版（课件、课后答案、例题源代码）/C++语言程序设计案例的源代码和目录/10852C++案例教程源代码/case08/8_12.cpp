#include <iostream>  
#include<string> 
using namespace std;
class CDeepCopy
{public: 
	int    n;                       //��̬�����Ԫ�ظ���	
	int   *p;                       //��̬�����׵�ַ	
 	CDeepCopy(int) ; 		
	~CDeepCopy();
    CDeepCopy(const CDeepCopy& r) ;  //�������캯�� 
	CDeepCopy& operator=(const CDeepCopy& r); //��ֵ���������	
}; 	
CDeepCopy::~CDeepCopy()	
{  	static int s_num=1;		cout<<s_num++<<" .~CDeepCopy()\n"; 	delete [] p;  }
CDeepCopy::CDeepCopy(int k) { n=k; p=new int[n]; } //���캯��ʵ��
CDeepCopy& CDeepCopy::operator=(const CDeepCopy& r)  //��ֵ���������ʵ��   
{	if(n!=r.n) 						//�������鳤�Ȳ�һ��ʱ
	{ 	delete [] p;					//�ͷ�ԭ��������ռ�
		n=r.n;		                   //�����������鳤�����
		p=new int[n];                    //������Դ����ȳ��Ķ�������
	}								//ȷ��Ŀ������ӵ�ж�������Դ
	memcpy(p,r.p,n*sizeof(int));		//������̬��Դ���������� 
	return *this;						//������������һ�µĵ�ǰ����
}	
CDeepCopy::CDeepCopy(const CDeepCopy& r)  //�������캯��
{  	n=r.n;							//��ǰ����ά������Դ����ά��
	p=new int[n];						//�����������ڴ���Դ
 	memcpy(p,r.p,n*sizeof(int));		//��������ȫ�̿���
}
int main()
{	CDeepCopy a(2),d(3);
	a.p[0]=1;  d.p[0]=666; 				//����a,d����Ԫ�صĸ�ֵ
	{  	CDeepCopy b(d);  				//���ÿ������캯��
        a.p[0]=88;		b=a;        		//���ø�ֵ���������
        cout<<b.p[0];   				//��ʾ�ڲ�ֲ����������Ԫ��  
	}  
    cout<<d.p[0];                    		//��ʾd����Ԫ��a.p[0]��ֵ
	cout<<" d fade away;\n";  cout<<a.p[0];  //��ʾa����Ԫ��a.p[0]��ֵ
	return 0;
}	
