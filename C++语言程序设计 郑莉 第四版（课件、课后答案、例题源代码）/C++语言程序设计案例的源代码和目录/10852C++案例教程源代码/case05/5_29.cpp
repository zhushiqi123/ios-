#include<iostream>
using namespace std;
#define NUM 100    	//���1
int main()
{
#if NUM>=100    	//���2������Ϊ������������
		cout<<"This line is compiled\n"; 	//���3���ڵ��Գ���ʱ��Ҫ�����Щ��Ϣ
#else
		cout<<"This line is not compiled\n"; //���4���ڵ��Գ���ʱ��Ҫ�����Щ��Ϣ
#endif    			//���5������Ϊ������������
	return 0;
}
