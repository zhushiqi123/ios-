#include <iostream>
#include <cstring> 
using namespace std;
int main()
{	char *str1 = "abcdefghijklmnopqrstuvwxyz";
	char *str2 = "four",*str3 = "Boston";
	//ʹ���ַ������Ⱥ���strlen
	cout<< "The length of \"" << str1 << "\" is " << strlen( str1 )
        << "\nThe length of \"" << str2 << "\" is " << strlen( str2 )
        << "\nThe length of \"" << str3 << "\" is " << strlen( str3 ) << endl;
	return 0;
}
