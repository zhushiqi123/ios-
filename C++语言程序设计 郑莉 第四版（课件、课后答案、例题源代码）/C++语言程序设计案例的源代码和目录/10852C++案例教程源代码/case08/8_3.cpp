#include<iostream>
using namespace std;
class COpertor
{	long x; 								//˽�����ݳ�Ա
public:	  
	COpertor(long m){x=m;}
	void Show()	{ cout<<"The num is:"<<num<<", x="<<x<<endl;}
	COpertor& operator++();             //���1�������Լ���ǰ�������
	COpertor  operator++(int);           //���2�������Լ��ͺ��������
	friend  COpertor  operator--(COpertor&,int);   //���3�������Լ��ͺ��������
	static  int num;
};
COpertor& COpertor::operator++()  		//����ǰ���������������, ���ض������á�
{  	++x;		                       //this��ָ�ĵĶ����Ѿ���1 
	cout<<"COpertor::operator++():"<<num++<<", x="<<x<<endl;
	return *this;                     //�����Զ����ر䶯���ֵ
}
COpertor COpertor::operator++(int) 		//��������������������, ������ֵ����
{  	cout<<"COpertor::operator++(int):"<<num++<<", x="<<x<<endl;
	COpertor temp(*this);              //������ʱ���󱣴�ԭ�ȵĽ��
	x++;		                        //this��ָ�ĵĶ����Ѿ���1 
	return temp;                      //�������ر���ԭ�Ƚ������ʱ����
}
COpertor operator--(COpertor& r,int) //��������Լ������Ϊȫ�ֺ�����������ֵ����
{   cout<<"operator--(COpertor&,int):"<<COpertor::num++<<", x="<<r.x<<endl;
	COpertor temp(r);              //������ʱ���󱣴�ԭ�Ƚ��
	r.x--;                        //����r��ָ���ڴ��Ѿ���1 
	return temp;                  //�������ر���ԭ�Ƚ������ʱ���� 
}
int COpertor::num=1;
int main()       
{   	COpertor a(1); 
	a.operator++(1);  	a.operator++();  
	++a--++;         a.Show(); 	
	return 0;
}  
