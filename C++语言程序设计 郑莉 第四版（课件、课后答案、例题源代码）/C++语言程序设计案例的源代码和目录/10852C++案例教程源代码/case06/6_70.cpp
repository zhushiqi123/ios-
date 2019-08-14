#include <iostream>
#include <string>
using namespace std;
int main()
{  string str( "The airplane landed on time." );
   cout << str.substr( 7, 5 ) << endl; //重新找回子串"plane"
   return 0;
} 
