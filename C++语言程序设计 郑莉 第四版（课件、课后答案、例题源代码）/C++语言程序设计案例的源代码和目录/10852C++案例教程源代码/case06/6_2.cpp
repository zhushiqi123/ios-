#include <iostream>
using namespace std;
int main()
{	const int SIZE=5;  						//���1��������ų����������������С
	double Array[SIZE];    						//���2��������Ԫ������Ϊ˫������
	cout << "Enter " << SIZE << " numbers:\t";
	for (int i=0; i<SIZE; i++)	cin >> Array[i];	//���3��ʹ�÷��ų�������ѭ������
	cout << "In reverse order: ";
	for (i=SIZE-1; i>=0; i--)					//���4��ʹ�÷��ų�������ѭ������
       cout << " " << Array[i]; 
	return 0;
}
