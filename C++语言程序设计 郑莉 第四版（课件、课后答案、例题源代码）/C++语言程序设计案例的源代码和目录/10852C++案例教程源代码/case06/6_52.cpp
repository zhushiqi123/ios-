#include <iostream> 
using namespace std; 
int main() 
{	int *first,*second;		//����ָ�����
	first=new int[5];			//���1������һ����СΪ10�Ķ�̬����
	for(int i=0;i<5;i++) 	first[i]=i*10; 					//�����������
	for(i=0;i<5;i++) 	cout<<"No."<<i<<" is:"<<first[i]<<endl; 	//��ʾ��������
	second=first;				//���2����first������second(ǳ������
	for(i=0;i<5;i++) 	cout<<"No."<<i<<" is:"<<second[i]<<endl; //��ʾ��������
	delete [] second;	
     delete [] first;			//���3����������ǳ���������ڴ��ظ��ͷš�
	return 0;
} 
