#include <iostream>
using namespace std;
void Input(int Array[], int& n)				//读入n个元素到数组Array[]中
{	cout << "Enter integers.  Terminate with 0:\n";
	n = 0;
	do  { cout << "Array[" << n << "]: "; cin >> Array[n]; } while (Array[n++] != 0);
	--n;									//不计 0
}
void Output(int Array[], int n)				//输出数组中的前 n个元素
{	for (int i=0; i<n; i++)    cout << Array[i] << " ";}
int main()
{	const int MAXSIZE=100;
	int Array[MAXSIZE]={0}, size;
	Input(Array,size);
	cout << "The array has " << size << " elements: ";
	Output(Array,size);
	return 0;
}
