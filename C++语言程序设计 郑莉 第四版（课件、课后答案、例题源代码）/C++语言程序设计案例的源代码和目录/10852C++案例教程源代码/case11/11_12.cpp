#include <iostream>
#include <iomanip>
using namespace std;
int main()
{	int num = -12345678;
	cout << "Default is right align:\n" << setw(20) << num; 	//����Ĭ�϶��뷽ʽ
	cout<< " \nUse left:\n "<< left << setw(20) << num; 		//ʹ���������ݷ�
	cout<< " \nUse internal:\n "<<internal<< setw(20) << num; 	//ʹ���м������ݷ�
	cout << " \nUse right:\n "<<right<< setw(20) << num << endl; //ʹ���Ҷ�����ݷ�
	return 0;
}
