#include <iostream>
using namespace std;
int sum(int [], int);								//ԭ������
int main()
{	int Array[] = { 10, 30, 50, 70 };  
     int size = sizeof(Array)/sizeof(int);
	cout << "sum(Array,size) = " << sum(Array,size) << endl;
	return 0;
}
int sum(int Array[], int n)							//����������ǰn��Ԫ�صĺ�
{	int sum=0;
	for (int i=0; i<n; i++)    sum += Array[i];
	return sum;
}
