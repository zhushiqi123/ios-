#include <iostream>
using namespace std;
void Input(int Array[], int& n)				//����n��Ԫ�ص�����Array[]��
{	cout << "Enter integers.  Terminate with 0:\n";
	n = 0;
	do  { cout << "Array[" << n << "]: "; cin >> Array[n]; } while (Array[n++] != 0);
	--n;									//���� 0
}
void Output(int Array[], int n)				//��������е�ǰ n��Ԫ��
{	for (int i=0; i<n; i++)    cout << Array[i] << " ";}
int main()
{	const int MAXSIZE=100;
	int Array[MAXSIZE]={0}, size;
	Input(Array,size);
	cout << "The array has " << size << " elements: ";
	Output(Array,size);
	return 0;
}
