#include <iostream>
#include <cstring> 
using namespace std;
int main()
{  char str1[ 20 ] = "Happy ",str2[] = "New Year ", str3[ 40 ] = "";
   cout << "str1 = " << str1 << "\nstr2 = " << str2;
   strcat( str1, str2 );  							// ���ַ���str2 ���ӵ� str1��
   cout << "\nAfter strcat(str1, str2):\nstr1 = " << str1 << "\nstr2 = " << str2;
   //���ַ���str1ǰ6���ַ����ӵ�str3��
   strncat( str3, str1, 6 );  						// �����һ���ַ��������'\0' 
   cout << "\nAfter strncat(str3, str1, 6):\nstr1 = " << str1 << "\nstr3 = " << str3;
   strcat( str3, str1 );  							//���ַ���str1 ���ӵ� str3�� 
   cout << "\nAfter strcat(str3, str1):\nstr1 = " << str1 << "\nstr3 = " << str3 << endl;
   return 0; 
} 
