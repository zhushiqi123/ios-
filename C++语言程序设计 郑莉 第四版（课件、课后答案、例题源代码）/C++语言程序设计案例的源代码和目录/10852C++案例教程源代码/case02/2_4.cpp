#include <iostream>
using namespace std;
int main()
{	const float PI=3.1415926; 		//float �ͳ���
	float r=2.0; 					//��float �ͳ�����ʼ������
	cout<<"r="<<r<<endl;			//���Բ�İ뾶
	float length; 					//float�ͱ�������
	length=2*PI*r; 				//����Բ���ܳ�
	cout<<"Length="<<length<<endl;	//���Բ���ܳ�
	float area=PI*r*r; 				//����Բ�����
	cout<<"Area="<<area<<endl;		//���Բ�����
	return 0;
}
