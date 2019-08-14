#include <iostream> 
using namespace std; 
int main() 
{ 	double x, y;   int *p;  
  	x = 100.20;   p = (int *) &x;		//将类型double * 强制转换为int * 
  	y = *p;      cout << y;				//此语句将不能得到预期的结果。 
	return 0; 
}
