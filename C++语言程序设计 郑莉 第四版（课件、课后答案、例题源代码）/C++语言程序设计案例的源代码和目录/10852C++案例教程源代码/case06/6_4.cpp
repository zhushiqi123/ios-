#include <iostream>
using namespace std;
int main()
{	float Array[5] = { 10, 20, 30 };			//���1�����ֳ�ʼ������
	//float Array[2] = { 10, 20, 30 };		//���2������
	int size = sizeof(Array)/sizeof(float);	//������ʵ�ʷ����С
	for (int i=0; i<size; i++)    cout << "Array[" << i << "] = " << Array[i] << endl;
	return 0;
}
