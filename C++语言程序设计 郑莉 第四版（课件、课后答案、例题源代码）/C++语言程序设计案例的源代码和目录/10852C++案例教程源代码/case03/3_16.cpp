#include <iostream>
using namespace std;
int CalVol(int length, int width = 2, int height = 3);	// 带有默认形参值的函数声明
void main()
{	int x = 10, y = 11, z = 12;
	cout << "Volume of the box is: " ;	cout << CalVol(x, y, z) << endl;
	cout << "Volume of the box is: " ;	cout << CalVol(x, y) << endl;
	cout << "Volume of the box is: " ;	cout << CalVol(x) << endl;
	cout << "Volume of the box is: ";	cout << CalVol(x, 100) << endl;
	cout << "Volume of the box is: ";	cout << CalVol(100, 100, 100) << endl;
}
int CalVol(int length, int width, int height){return length * width * height;}
