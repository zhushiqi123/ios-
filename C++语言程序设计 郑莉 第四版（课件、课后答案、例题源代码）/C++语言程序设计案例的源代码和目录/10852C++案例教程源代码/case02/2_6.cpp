#include <iostream> 
using namespace std; 
int main() 
{	int x, y; 
	x = 10;  y = 3; 
	cout << x << " / " << y << " is " << x / y  			//整数的除法操作
		  <<" with x % y is " << x % y << endl;    			//整数的取余操作
	x ++;   --y ;									//使用增量减量运算符
	cout << x << " / " << y << " is " << x / y << "\n"    		//整数的除法操作
		  << x << " % " << y << " is " << x % y<<endl;  		//整数的取余操作
	return 0; 
}
