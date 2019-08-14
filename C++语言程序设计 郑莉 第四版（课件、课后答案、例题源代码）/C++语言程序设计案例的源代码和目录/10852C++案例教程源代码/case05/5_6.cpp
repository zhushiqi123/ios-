#include <iostream> 
using namespace std; 
int Average(int i) 
{	static int sum = 0, count = 0; //声明静态局部变量，具有全局寿命，局部可见
	sum = sum + i;   count++; 
	return sum / count; 
}
int main() 
{	int num; //局部变量，具有动态生存期
	do 
	{	cout << "Enter numbers (-1 to quit): ";     cin >> num; 
		if(num != -1)   cout << "Running average is: " << Average(num); 
		cout <<endl; 
	} while(num > -1); 
	return 0; 
} 
