#include <iostream> 
using namespace std; 
int main() 
{	int *pi=new int(88),*qi;		//������������ָ�����
	cout<<"The address is as follows:"<<endl <<"pi="<<pi<<", qi="<<qi<<endl;
	qi=pi;						//���1��ǳ����
	delete pi;
	delete qi;					//��������ǳ���������ڴ��ظ��ͷš�
	cout<<"pi="<<pi<<", qi="<<qi<<endl;
	return 0;
}
