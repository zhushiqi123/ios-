#include<iostream>
using namespace std;
int main()
{   union utype	{ char  c;   int  i;  float   f;    };	//������������
	union utype u0;								//�������ϱ���
    u0.c='*';										//ʹ�����ϱ����е��ַ��ͳ�Ա
    cout<<"u0.c="<<u0.c<<endl;   u0.i=1000;			//ʹ�����ϱ����е����ͳ�Ա 
    cout<<"u0.i="<<u0.i<<endl;    u0.f=3.1416f;		//ʹ�����ϱ����еĸ����ͳ�Ա 
    cout<<"u0.f="<<u0.f<<endl;    utype u1={'A'};	//�������ϱ���ʱ��ʼ��
    cout<<"u1.c="<<u1.c<<endl;  					//ͬʱ�������ϱ����ĸ���Ա
    cout<<"u1.i="<<u1.i<<endl;
    cout<<"u1.f="<<u1.f<<endl;
	return 0;
}
