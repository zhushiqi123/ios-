#include <iostream>
using namespace std;
void GetValue(double*& array, int& n)			//ͨ�����ô��ݵ�ָ��
{	cout << "Enter number of items: ";  cin >> n;
	array = new double[n];   				//��̬�����ڴ�ռ�
	cout << "Enter " << n << " items, one per line:\n";
	for (int i = 0; i < n; i++)  { cout << "\t No." << i+1 << ": ";    cin >> array[i];  }
}
void DispValue(double* array, int n)
{	for (int i = 0; i < n; i++)    cout << array[i] << " ";
	cout << endl;
}
int main()
{	double* array;    // array ��һ���򵥵�δ������ռ��ָ��
	int n;
	GetValue(array,n);  	DispValue(array,n);   	//array�ǰ���n��˫����������
	delete [] array;  							//�ͷŷ����array���ڴ�ռ�
	GetValue(array,n);     DispValue(array,n);  	//array�����ǰ���n��˫����������
	return 0;
}
