#include <iostream>  
using namespace std;
void Input(int Array[][5], int n)   				//输入二维数组
{	cout << "Enter 15 integers, 5 per row:\n";
	for (int i=0; i<n; i++)
	{	cout << "Row " << i << ": ";
  		for (int j=0; j<5; j++)    cin >> Array[i][j];
	}
}
void Output(const int Array[][5], int n)		//输出二维数组
{	for (int i=0; i<n; i++)
	{	for (int j=0; j<5; j++)    cout << " " << Array[i][j];
		cout << endl;
	}
}
int main()
{ 	int Array[3][5];
  	Input(Array, 3);  Output(Array, 3);		//输入输出二维数组 
  	return 0;
}
