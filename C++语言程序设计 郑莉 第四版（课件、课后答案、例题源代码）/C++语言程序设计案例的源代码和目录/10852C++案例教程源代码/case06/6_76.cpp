#include <iostream>
#include <string>
using namespace std;
int main()
{  string str( "STRINGS" );   const char *ptr1 = 0;
   int length = str.length();
   char *ptr2 = new char[ length + 1 ];  	//���1����̬����һ���ַ����飬���� null������
   str.copy( ptr2, length, 0 );   		//���2����str�������ַ�������������ڴ�
   ptr2[ length ] = '\0';  				//���3�����null ��ֹ��
   cout << "string s is " << str << "\nstr converted to a C-Style string is "
        << str.c_str() << "\nptr1 is ";
   ptr1 = str.data();  					//���4��ʹ�ó�Ա����data
   for ( int i = 0; i < length; i++ )    cout << *( ptr1 + i );   //���5��ʹ��ָ�����
   cout << "\nptr2 is " << ptr2 << endl;
   delete [] ptr2;
   return 0;
} 
