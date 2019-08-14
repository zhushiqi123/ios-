#include <iostream> 
using namespace std; 
int main() 
{ char letter; 						//声明字符变量
  for(letter = 'A'; letter <= 'Z'; letter++) 	//使用字符变量控制for循环
    cout << letter<<" "; 				//输出字母表
  return 0; 
}
