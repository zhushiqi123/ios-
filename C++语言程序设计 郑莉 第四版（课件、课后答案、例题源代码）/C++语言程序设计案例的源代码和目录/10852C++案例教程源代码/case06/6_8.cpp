#include <iostream>
using namespace std;
int main()
{	float Array[4] = { 10.0, 20.0, 30.0 };					//���1������4ά����
	cout << "Array[100000000] = " << Array[100000000] << endl;	//����1���±겻�ܷ���
	Array[100000000] = 80.8f;  								//����2���±�Խ��
	cout << "Array[100000000] = " << Array[100000000] << endl;
	cout << Array << endl;
	return 0;
}
