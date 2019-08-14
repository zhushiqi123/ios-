#include <iostream>
using namespace std;
void GetValue(double*& array, int& n)			//通过引用传递的指针
{	cout << "Enter number of items: ";  cin >> n;
	array = new double[n];   				//动态分配内存空间
	cout << "Enter " << n << " items, one per line:\n";
	for (int i = 0; i < n; i++)  { cout << "\t No." << i+1 << ": ";    cin >> array[i];  }
}
void DispValue(double* array, int n)
{	for (int i = 0; i < n; i++)    cout << array[i] << " ";
	cout << endl;
}
int main()
{	double* array;    // array 是一个简单的未被分配空间的指针
	int n;
	GetValue(array,n);  	DispValue(array,n);   	//array是包含n各双精度型数组
	delete [] array;  							//释放分配给array的内存空间
	GetValue(array,n);     DispValue(array,n);  	//array重新是包含n各双精度型数组
	return 0;
}
