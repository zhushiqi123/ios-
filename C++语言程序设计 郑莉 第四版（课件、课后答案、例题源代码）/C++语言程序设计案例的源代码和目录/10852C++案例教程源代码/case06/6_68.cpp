#include <iostream>
#include <string>
using namespace std;
int main()
{  string str1( "cat" ), str2, str3;
   str2 = str1;          				// ���1��str1��ֵ�� str2
   str3.assign( str1 );  				// ���2��ʹ�ó�Ա����assign ��strl���Ƶ�str3
   cout << "str1: " << str1 << "\nstr2: " << str2 << "\nstr3: " << str3 << "\n ";
   str2[ 0 ] = str3[ 2 ] = 'r';			// ���3���޸� str2 �� str3
   cout << "After modification of str2 and str3:\n"
        << "str1: " << str1 << "\nstr2: " << str2 << "\nstr3: ";
   for ( int i = 0; i < str3.length(); i++ ) 
      cout << str3.at( i ); 			// ���4��ʹ�ó�Ա����at����
   string str4( str1 + "apult" ), str5;	// ���5������ str4 ,str5
   str3 += "pet";           			// ���6��ʹ�����صķ��ϸ�ֵ�����+=
   str1.append( "acomb" );  			// ���7��ʹ�ó�Ա����append
   str5.append( str1, 4, str1.length() );	// ���8��ʹ�ó�Ա����append
   cout << "\nAfter concatenation:\nstr1: " << str1 << "\nstr2: " << str2 << "\nstr3: " 
        << str3 << "\nstr4: " << str4 << "\nstr5: " << str5 << endl;
   return 0;
} 
