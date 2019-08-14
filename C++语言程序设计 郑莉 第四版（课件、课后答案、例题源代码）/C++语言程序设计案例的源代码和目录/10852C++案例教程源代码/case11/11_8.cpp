#include <iostream>
#include <iomanip>
using namespace std;
int main()
{  int num;   cout << "Enter a decimal number: ";   cin >> num; //输入整数
   //使用hex流操纵符显示十六进制整数
   cout << num << " in hexadecimal format is: " << hex<< num << endl;
   //使用oct流操纵符显示八进制整数
   cout << dec << num << " in octal format is: "<< oct << num << endl;
   //使用setbase流操纵符显示十进制整数
   cout << setbase(10) << num << " in decimal format is: " << num << endl;
   return 0;
}
