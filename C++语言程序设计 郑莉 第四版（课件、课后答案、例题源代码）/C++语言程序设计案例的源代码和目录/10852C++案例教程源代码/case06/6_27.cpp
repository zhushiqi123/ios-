#include <iostream> 
using namespace std; 
int main()
{	//void vobj;				//����1����������void���͵ı���
	void *pv;					//��ȷ����������void���͵�ָ��
	int  i=10,*pi; 
	pv = &i;					//void����ָ��ָ�����ͱ���
	pi = (int *)pv;  			//����ǿ��ת����void����ָ�븳ֵ��int����ָ��
	cout<<"pv="<<pv<<endl;
	//cout<<"*pv="<<*pv<<endl; //����2������ʹ��ȡֵ������������voidָ�����
	cout<<"pi="<<pi<<endl <<"*pi="<<*pi<<endl;
	return 0;
}
