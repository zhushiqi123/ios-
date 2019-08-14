#include <iostream> 
using namespace std; 
int main() 
{ 	int x = 10;  	//x 对于整个程序是可见的 
	if(x == 10) { int y = 20;     cout << "x + y is " << x + y << "\n";   } 
  	//y = 100; 	//错误!  y 在此是不可见的 
  	return 0; 
}
