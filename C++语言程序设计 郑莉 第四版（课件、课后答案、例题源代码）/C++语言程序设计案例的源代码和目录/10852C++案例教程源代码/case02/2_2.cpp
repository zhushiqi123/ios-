#include <iostream> 
using namespace std; 
int main() 
{ short int i; 				// signed short 类型整数 
  short unsigned int j; 		// unsigned short类型整数 
  j = 50000;    i = j; 		//将unsigned short类型整数赋值给signed short类型变量
  cout <<" The short int is:"<< i <<endl; 			//整型数值溢出
  cout <<" The short unsigned int is:"<< j<<endl;    
  return 0; 
}
