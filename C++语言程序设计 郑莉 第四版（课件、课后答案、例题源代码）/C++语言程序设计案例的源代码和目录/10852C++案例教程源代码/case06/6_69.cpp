#include <iostream>
#include <string>
using namespace std;
int main()
{	string str1( "Testing the comparison functions." );
	string str2( "Hello" ),str3( "stinger" ),str4( str2 );
	cout<< "str1: " << str1 << "\nstr2: " << str2
        << "\nstr3: " << str3 << "\nstr4: " << str4 << "\n";
	if ( str1 == str4 ) cout << "str1 == str4\n";		//语句1：比较str1 和str4
	else 
	{	if ( str1 > str4 )  cout << "str1 > str4\n";
		else	 cout << "str1 < str4\n";
	}
	int result = str1.compare( str2 ); 				//语句2：比较str1 和str2
	if ( result == 0 )  cout << "str1.compare( str2 ) == 0\n";
	else  
		if ( result > 0 )  cout << "str1.compare( str2 ) > 0\n";
		else	  cout << "str1.compare( str2 ) < 0\n";
	result=str1.compare(2, 5, str3, 0, 5 ); //语句3：比较str1 (元素2-5) 和str3 (元素0-5)
	if ( result == 0 )	  cout << "str1.compare( 2, 5, str3, 0, 5 ) == 0\n";
	else  
		if ( result > 0 )  cout << "str1.compare( 2, 5, str3, 0, 5 ) > 0\n";
		else	  cout << "str1.compare( 2, 5, str3, 0, 5 ) < 0\n";
	result = str4.compare( 0, str2.length(), str2 );   //语句4：比较 str2 和str4
	if ( result == 0 )	  cout << "str4.compare( 0, str2.length(), " << "str2 ) == 0\n";
	else  
		if ( result > 0 )  cout << "str4.compare( 0, str2.length(), " << "str2 ) > 0\n";
		else	 cout << "str4.compare( 0, str2.length(), str2 ) < 0\n";
	result = str2.compare( 0, 3, str4 ); 				//语句5：比较 str2 和str4
	if ( result == 0 )	 cout << "str2.compare( 0, 3, str4 ) == 0\n";
	else  
		if ( result > 0 )  cout << "str2.compare( 0, 3, str4 ) > 0\n";
		else	  cout << "str2.compare( 0, 3, str4 ) < 0\n";
   return 0;
}
