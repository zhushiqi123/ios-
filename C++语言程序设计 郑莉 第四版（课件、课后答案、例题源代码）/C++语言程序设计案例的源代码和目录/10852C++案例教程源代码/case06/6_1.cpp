#include <iostream>
using namespace std; 
int main() 
{	int Array[5]; 					//���1���������5������Ԫ�ص����� 
	for(int t=0; t<5; ++t) Array[t] = t; 	//���2���洢������ֵ��������
	for(t=0; t<5; ++t) 
	  cout << "This is Array[" << t << "]: " << Array[t] << "\n"; //���3����ʾ����Ԫ��
	return 0; 
} 
