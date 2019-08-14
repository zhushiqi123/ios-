#include <iostream>
#include <string>
using namespace std;
void DispInfo( const string & );
int main()
{  string str; cout << "Statistics before input:\n" << boolalpha; DispInfo( str );
   cout << "\nEnter a string: ";   cin >> str; 
   cout << "The string entered was: " << str;
   cout << "\nStatistics after input:\n";  DispInfo( str ); 
   str.resize( str.length() + 10 ); // 向str 中添加10 个元素
   cout << "\nStats after resizing by (length + 10):\n";   DispInfo( str );
   return 0;
} 
//输出字符串的特性
void DispInfo( const string &stringRef )
{  cout << "capacity: " 	<< stringRef.capacity() 
        << "\tmax size: " 	<< stringRef.max_size()
        << "\nsize: " 		<< stringRef.size() 
        << "\tlength: " 	<< stringRef.length()
        << "\tempty: " 		<< stringRef.empty();
}
