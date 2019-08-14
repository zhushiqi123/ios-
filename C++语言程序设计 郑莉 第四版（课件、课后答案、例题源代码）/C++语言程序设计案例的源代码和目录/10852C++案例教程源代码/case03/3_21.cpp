#include <iostream> 
using namespace std; 
float myfunc(float i); 
double myfunc(double i); 
int main() 
{	cout << myfunc(10.1) << " "; 	//不会出现二义性，默认调用函数 myfunc(double)
	cout << myfunc(10); 			//错误!出现二义性 
	return 0; 
} 
float myfunc(float i) { return i; } 
double myfunc(double i) { return -i; }
