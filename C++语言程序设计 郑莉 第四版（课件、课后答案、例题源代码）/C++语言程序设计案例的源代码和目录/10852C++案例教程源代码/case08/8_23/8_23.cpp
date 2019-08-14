#include <iostream>
using namespace std;
#include "MiniString.h"
int main()
{  MiniString str1( "Happy" ),str2( " Christmas" ),str3;
 cout << "The results of comparing str2 and str1: str2 == str1 is " 
        << ( str2 == str1 ? "true" : "false" )<<endl;  // 使用重载的关系运算符
   if ( !str3 )  // 使用重载的操作符判断字符串是否为空(!)
   {  cout << "str3 is empty and assigning str1 to str3;";
      str3 = str1;  // 使用重载的赋值运算符
   }
   cout << "\nAfter str1 += str2:  str1 = ";
   str1 += str2;     // 使用复合赋值运算符
   cout << str1<<endl;
   // 使用转换运算符
   str1 += " to you";   cout << "After str1 += \" to you\" : str1 = " << str1 << "\n";
   // 使用函数调用操作符 ()
   cout << "The substring of str1(0, 14 ) is: " << str1( 0, 14 ) << "\n";
   //调用拷贝构造函数 
   MiniString *sPtr = new MiniString( str1 );  cout << "The string *sPtr = " << *sPtr << "\n";
   // 使用赋值运算符进行自我赋值
   *sPtr = *sPtr;  cout << "After Assigning *sPtr to itself: *sPtr = " << *sPtr << '\n';
   delete sPtr;     // 调用析构函数   
   // 使用下标运算符
   str1[ 0 ] = 'M';  str1[ 1 ] = 'e'; str1[ 2 ] = 'r';  str1[ 3 ] = 'r'; str1[ 4 ] = 'y'; 
   cout << "After substitution str1 is: "<< str1 << "\n";
   // 越界检查
   cout << "Attempt to assign 'd' to str1[40] yields:" << endl;
   str1[40] = 'd';     // 错误：下标越界
   return 0;
}
