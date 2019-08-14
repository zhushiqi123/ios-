#include <iostream>
using namespace std;
int main()
{  char buff[60]; 					//创建 60个字符的数组
   cout << "Enter a sentence: ";   cin.read( buff, 20 );	//使用read输入字符到buff
   cout << "The entered sentence was: ";
   cout.write( buff,cin.gcount());	//使用write和gcount来显示buff中的字符
   return 0;
}
