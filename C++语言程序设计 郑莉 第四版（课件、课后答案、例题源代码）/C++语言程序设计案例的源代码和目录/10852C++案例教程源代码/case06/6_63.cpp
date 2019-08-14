#include <iostream>
#include <cstring> 
using namespace std;
int main()
{  char str1[ 20 ] = "Happy ",str2[] = "New Year ", str3[ 40 ] = "";
   cout << "str1 = " << str1 << "\nstr2 = " << str2;
   strcat( str1, str2 );  							// 将字符串str2 连接到 str1上
   cout << "\nAfter strcat(str1, str2):\nstr1 = " << str1 << "\nstr2 = " << str2;
   //将字符串str1前6个字符连接到str3上
   strncat( str3, str1, 6 );  						// 在最后一个字符后面添加'\0' 
   cout << "\nAfter strncat(str3, str1, 6):\nstr1 = " << str1 << "\nstr3 = " << str3;
   strcat( str3, str1 );  							//将字符串str1 连接到 str3上 
   cout << "\nAfter strcat(str3, str1):\nstr1 = " << str1 << "\nstr3 = " << str3 << endl;
   return 0; 
} 
