#include<iostream>
using namespace std;
#define RUN    						//���1���ڵ��Գ���ʱʹ֮��Ϊע����
int main()
{	int x=1,y=2,z=3;
	#ifndef RUN    						//���2������Ϊ������������
		cout<<"x="<<x<<"��y="<<y<<"��z="<<z; //���3���ڵ��Գ���ʱ��Ҫ�����Ϣ
	#endif    							//���4������Ϊ������������
	cout<<"x*y*z="<<x*y*z<<endl;
	return 0;
}
