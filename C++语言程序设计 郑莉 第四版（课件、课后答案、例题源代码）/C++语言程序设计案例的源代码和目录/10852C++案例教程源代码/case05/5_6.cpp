#include <iostream> 
using namespace std; 
int Average(int i) 
{	static int sum = 0, count = 0; //������̬�ֲ�����������ȫ���������ֲ��ɼ�
	sum = sum + i;   count++; 
	return sum / count; 
}
int main() 
{	int num; //�ֲ����������ж�̬������
	do 
	{	cout << "Enter numbers (-1 to quit): ";     cin >> num; 
		if(num != -1)   cout << "Running average is: " << Average(num); 
		cout <<endl; 
	} while(num > -1); 
	return 0; 
} 
