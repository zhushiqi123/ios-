#include <iostream>
#include <string>
using namespace std;
int main()
{  string str1( "beginning end" ),str2( "middle " ),str3( "12345678" ),str4( "xx" );
   cout << "Initial strings:\nstr1: " << str1 << "\nstr2: " << str2 << "\nstr3: " << str3
        << "\nstr4: " << str4 << "\n ";
   str1.insert( 10, str2 ); //语句1：在字符串str1中的位置10插入 "middle"
   str3.insert( 3, str4, 0, string::npos ); //语句2：在字符串str3中的位置3插入"xx"
   cout<< "Strings after insert:\nstr1: "<< str1 << "\nstr2: " << str2 << "\nstr3: " <<str3
        << "\nstr4: " << str4 << endl;
   return 0;
} 
