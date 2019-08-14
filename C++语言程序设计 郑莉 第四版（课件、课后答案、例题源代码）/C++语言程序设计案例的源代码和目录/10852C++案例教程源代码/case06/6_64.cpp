#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main()
{  	char *str1 = "Happy New Year";   char *str2 = "Happy New Year";
   	char *str3 = "Happy Holidays";
	//使用比较字符串函数strcmp
   	cout <<"strcmp(str1, str2) = " << setw( 2 ) << strcmp( str1, str2 ) 
        << "\nstrcmp(str1, str3) = " << setw( 2 ) << strcmp( str1, str3 ) 
		<< "\nstrcmp(str3, str1) = " << setw( 2 ) << strcmp( str3, str1 )<<endl;
	//使用比较字符串函数strncmp
	cout<< "strncmp(str1, str3, 6) = " << setw( 2 ) << strncmp( str1, str3, 6 ) 
		<< "\nstrncmp(str1, str3, 7) = " << setw( 2 ) << strncmp( str1, str3, 7 ) 
        << "\nstrncmp(str3, str1, 7) = " << setw( 2 ) << strncmp( str3, str1, 7 ) << endl;
   	return 0; 
}
