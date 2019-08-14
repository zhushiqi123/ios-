#include <iostream>
#include <string>
using namespace std;
int main()
{  string str1( "cat" ), str2, str3;
   str2 = str1;          				// 语句1：str1赋值到 str2
   str3.assign( str1 );  				// 语句2：使用成员函数assign 将strl复制到str3
   cout << "str1: " << str1 << "\nstr2: " << str2 << "\nstr3: " << str3 << "\n ";
   str2[ 0 ] = str3[ 2 ] = 'r';			// 语句3：修改 str2 和 str3
   cout << "After modification of str2 and str3:\n"
        << "str1: " << str1 << "\nstr2: " << str2 << "\nstr3: ";
   for ( int i = 0; i < str3.length(); i++ ) 
      cout << str3.at( i ); 			// 语句4：使用成员函数at（）
   string str4( str1 + "apult" ), str5;	// 语句5：声明 str4 ,str5
   str3 += "pet";           			// 语句6：使用重载的符合赋值运算符+=
   str1.append( "acomb" );  			// 语句7：使用成员函数append
   str5.append( str1, 4, str1.length() );	// 语句8：使用成员函数append
   cout << "\nAfter concatenation:\nstr1: " << str1 << "\nstr2: " << str2 << "\nstr3: " 
        << str3 << "\nstr4: " << str4 << "\nstr5: " << str5 << endl;
   return 0;
} 
