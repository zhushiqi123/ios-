#include <cstring>
#include <iostream>
using namespace std;
int main()
{	char str[] = "The Mississippi is a long river.";
	cout << "str = \"" << str << "\"\n";
	char* p = strchr(str, ' '); 			//ʹ�ö�λ�ַ�������strchr
	cout << "strchr(str, ' ') points to str[" << p - str << "].\n";
	p = strchr(str, 's'); 					//ʹ�ö�λ�ַ�������strchr
	cout << "strchr(str, 's') points to str[" << p - str << "].\n";
	p = strrchr(str, 's'); 					//ʹ�ö�λ�ַ�������strrchr
	cout << "strrchr(str, 's') points to str[" << p - str << "].\n";
	p = strstr(str, "is");					//ʹ�ö�λ�ַ�������strstr
	cout << "strstr(str, \"is\") points to str[" << p - str << "].\n";
	p = strstr(str, "isi");					//ʹ�ö�λ�ַ�������strstr
	if (p == NULL) cout << "strstr(str, \"isi\") returns NULL\n";
	return 0;
}
