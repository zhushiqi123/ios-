#include <iostream>
#include <string>
using namespace std;
int main()
{  string str1( "one" ),str2( "two" );
   cout << "Before swap:\nstr1: " << str1 << "\nstr2: " << str2;  //����ַ���
   str1.swap( str2 );  										//�����ַ���
   cout << "\nAfter swap:\nstr1: " << str1 << "\nstr2: " << str2 << endl;
   return 0;
}
