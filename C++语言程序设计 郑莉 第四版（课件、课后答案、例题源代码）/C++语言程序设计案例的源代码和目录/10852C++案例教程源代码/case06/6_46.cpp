#include<iostream>
using namespace std;
int main()
{	int *pi;
	//pi=3.5;//���1������û���ڴ浥Ԫ�������*pi
	int i=3;
	pi=&i;//���2��ͨ���������ĵ�ַ����ָ��������г�ʼ��
	cout<<"The address is:"<<pi<<", and the value is:"<<*pi<<endl;
	float *pf; 	pf=new float;//���3������һ��float���ڴ浥Ԫ
	*pf=3.6f;//���4����ȷ��ʼ����*qf�Ѿ����������ڴ�ռ�
	cout<<"The address is:"<<pf<<", and the value is:"<<*pf<<endl;
	double *pd;	pd=new double(3.7);//���5������һ��double���ڴ浥Ԫ����ʼ��
	cout<<"The address is:"<<pd<<", and the value is:"<<*pd<<endl;
	return 0;
} 
