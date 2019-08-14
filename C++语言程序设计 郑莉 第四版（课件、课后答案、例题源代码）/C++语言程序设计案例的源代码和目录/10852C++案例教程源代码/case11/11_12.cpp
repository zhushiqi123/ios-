#include <iostream>
#include <iomanip>
using namespace std;
int main()
{	int num = -12345678;
	cout << "Default is right align:\n" << setw(20) << num; 	//按照默认对齐方式
	cout<< " \nUse left:\n "<< left << setw(20) << num; 		//使用左对齐操纵符
	cout<< " \nUse internal:\n "<<internal<< setw(20) << num; 	//使用中间对齐操纵符
	cout << " \nUse right:\n "<<right<< setw(20) << num << endl; //使用右对齐操纵符
	return 0;
}
