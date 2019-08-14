#include <cstring>
#include <iostream>
using namespace std;
int main()
{	char str[] = "The Mississippi is a long river.";
	cout << "str = \"" << str << "\"\n";
	char* p = strchr(str, ' '); 			//使用定位字符串函数strchr
	cout << "strchr(str, ' ') points to str[" << p - str << "].\n";
	p = strchr(str, 's'); 					//使用定位字符串函数strchr
	cout << "strchr(str, 's') points to str[" << p - str << "].\n";
	p = strrchr(str, 's'); 					//使用定位字符串函数strrchr
	cout << "strrchr(str, 's') points to str[" << p - str << "].\n";
	p = strstr(str, "is");					//使用定位字符串函数strstr
	cout << "strstr(str, \"is\") points to str[" << p - str << "].\n";
	p = strstr(str, "isi");					//使用定位字符串函数strstr
	if (p == NULL) cout << "strstr(str, \"isi\") returns NULL\n";
	return 0;
}
