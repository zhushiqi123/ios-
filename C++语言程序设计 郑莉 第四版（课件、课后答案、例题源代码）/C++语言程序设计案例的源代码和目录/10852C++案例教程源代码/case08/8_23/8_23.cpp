#include <iostream>
using namespace std;
#include "MiniString.h"
int main()
{  MiniString str1( "Happy" ),str2( " Christmas" ),str3;
 cout << "The results of comparing str2 and str1: str2 == str1 is " 
        << ( str2 == str1 ? "true" : "false" )<<endl;  // ʹ�����صĹ�ϵ�����
   if ( !str3 )  // ʹ�����صĲ������ж��ַ����Ƿ�Ϊ��(!)
   {  cout << "str3 is empty and assigning str1 to str3;";
      str3 = str1;  // ʹ�����صĸ�ֵ�����
   }
   cout << "\nAfter str1 += str2:  str1 = ";
   str1 += str2;     // ʹ�ø��ϸ�ֵ�����
   cout << str1<<endl;
   // ʹ��ת�������
   str1 += " to you";   cout << "After str1 += \" to you\" : str1 = " << str1 << "\n";
   // ʹ�ú������ò����� ()
   cout << "The substring of str1(0, 14 ) is: " << str1( 0, 14 ) << "\n";
   //���ÿ������캯�� 
   MiniString *sPtr = new MiniString( str1 );  cout << "The string *sPtr = " << *sPtr << "\n";
   // ʹ�ø�ֵ������������Ҹ�ֵ
   *sPtr = *sPtr;  cout << "After Assigning *sPtr to itself: *sPtr = " << *sPtr << '\n';
   delete sPtr;     // ������������   
   // ʹ���±������
   str1[ 0 ] = 'M';  str1[ 1 ] = 'e'; str1[ 2 ] = 'r';  str1[ 3 ] = 'r'; str1[ 4 ] = 'y'; 
   cout << "After substitution str1 is: "<< str1 << "\n";
   // Խ����
   cout << "Attempt to assign 'd' to str1[40] yields:" << endl;
   str1[40] = 'd';     // �����±�Խ��
   return 0;
}
