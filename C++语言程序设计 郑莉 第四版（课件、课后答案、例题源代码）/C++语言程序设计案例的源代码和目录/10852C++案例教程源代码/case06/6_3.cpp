#include <iostream>
using namespace std;
int main()
{	float Array[] = { 10, 20, 30 };				//���1�������ʼ��
	int size = sizeof(Array)/sizeof(float);		//���2���������ʵ�ʴ�С
	for (int i=0; i<size; i++)    cout << "Array[" << i << "] = " << Array[i] << endl;
	return 0;
}