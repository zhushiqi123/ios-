#include <iostream> 
using namespace std; 
//变量num将在每次进入函数fun()时进行初始化 
void fun() 
{ 	int num = 10; 
  	cout << num << "\n"; 
  	num++;               // 这个语句没有持续效果 
}
int main() 	
{ for(int i=0; i < 3; i++) fun();   return 0; } 
