#include <iostream> 
using namespace std; 
int main()
{	int i=10,j=20;
	const int* pi=&i;	//ָ������ָ��
	//*pi=20;			//����1������ͨ��pi�ı���ָ�������ֵ
	cout<<"pi="<<pi<<"*pi="<<*pi<<endl;
	int* const pj=&j;	//ָ�����͵ĳ���
	//pj=pi;			//����2�������޸�pj��ֵ
	cout<<"pj="<<pj<<"*pj="<<*pj<<endl;
	return 0;
}
