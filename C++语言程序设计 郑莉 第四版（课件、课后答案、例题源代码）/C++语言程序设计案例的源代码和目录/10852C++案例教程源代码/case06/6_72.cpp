#include <iostream>
#include <string>
using namespace std;
void DispInfo( const string & );
int main()
{  string str; cout << "Statistics before input:\n" << boolalpha; DispInfo( str );
   cout << "\nEnter a string: ";   cin >> str; 
   cout << "The string entered was: " << str;
   cout << "\nStatistics after input:\n";  DispInfo( str ); 
   str.resize( str.length() + 10 ); // ��str �����10 ��Ԫ��
   cout << "\nStats after resizing by (length + 10):\n";   DispInfo( str );
   return 0;
} 
//����ַ���������
void DispInfo( const string &stringRef )
{  cout << "capacity: " 	<< stringRef.capacity() 
        << "\tmax size: " 	<< stringRef.max_size()
        << "\nsize: " 		<< stringRef.size() 
        << "\tlength: " 	<< stringRef.length()
        << "\tempty: " 		<< stringRef.empty();
}
