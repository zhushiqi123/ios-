#include <iostream>
using namespace std;
int main()
{	const int SIZE=4;				     //���������С
	float Array[SIZE] = { 10, 20, 30, 40 };
     float f1=12.3, f2=45.6, f3=78.9;
	for (int i=0; i<7; i++)  			//���1���±곬����Χ��
		cout << "Array[" << i << "] = " << Array[i] << endl;
	return 0;
}
