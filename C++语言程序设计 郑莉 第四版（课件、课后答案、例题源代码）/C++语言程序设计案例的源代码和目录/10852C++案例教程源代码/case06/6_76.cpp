#include <iostream>
#include <string>
using namespace std;
int main()
{  string str( "STRINGS" );   const char *ptr1 = 0;
   int length = str.length();
   char *ptr2 = new char[ length + 1 ];  	//语句1：动态分配一个字符数组，包括 null结束符
   str.copy( ptr2, length, 0 );   		//语句2：将str中所有字符拷贝到分配的内存
   ptr2[ length ] = '\0';  				//语句3：添加null 终止符
   cout << "string s is " << str << "\nstr converted to a C-Style string is "
        << str.c_str() << "\nptr1 is ";
   ptr1 = str.data();  					//语句4：使用成员函数data
   for ( int i = 0; i < length; i++ )    cout << *( ptr1 + i );   //语句5：使用指针输出
   cout << "\nptr2 is " << ptr2 << endl;
   delete [] ptr2;
   return 0;
} 
