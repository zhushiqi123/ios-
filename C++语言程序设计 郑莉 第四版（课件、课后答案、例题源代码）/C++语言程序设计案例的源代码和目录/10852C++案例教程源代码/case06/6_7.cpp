#include <iostream>
using namespace std;
int main()
{	float Array[] = { 10, 20, 30 };				//���1����������Ԫ�ص�����
	cout << "Array[3] = " << Array[3] << endl;
	Array[3] = 80.8f;  						//���2�������±�Խ��!
	cout << "Array[3] = " << Array[3] << endl;
	return 0;
}
