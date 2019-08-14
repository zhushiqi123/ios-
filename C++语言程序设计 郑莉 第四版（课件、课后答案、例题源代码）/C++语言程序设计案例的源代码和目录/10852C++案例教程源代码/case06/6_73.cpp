#include <iostream>
#include <string>
using namespace std;
int main()
{  string str( "noon is 12 p.m." );   int location;
   cout << "Original string:\n" << str << "\n(find) \"is\" was found at: " 
        << str.find( "is" ) 							//语句1：在位置5查找 "is"
        << "\n(rfind) \"is\" was found at: " << str.rfind( "is" ); //语句2：在位置5查找 "is"
   location = str.find_first_of( "misop" ); 				//语句3：在位置1查找'o'
   cout << "\n (find_first_of) found '" << str[ location ]
        << "' from the group \"misop\" at: " << location;
   location = str.find_last_of( "misop" ); 				//语句4：在位置13查找'm'
   cout << "\n (find_last_of) found '" << str[ location ] 
        << "' from the group \"misop\" at: "<< location;
   location = str.find_first_not_of( "noi spm" ); 			//语句5：在位置8查找 '1'
   cout << "\n (find_first_not_of) '" << str[ location ]
        << "' is not contained in \"noi spm\" and was found at:" << location;
   location = str.find_first_not_of( "12noi spm" );  		//语句6：在位置12查找 '.'
   cout << "\n(find_first_not_of) '" << str[ location ]
        << "' is not contained in \"12noi spm\" and was " << " at:" << location << endl;
   location = str.find_first_not_of( "noon is 12 p.m." );   //语句7：查找不再str中的字符
   cout << "\nfind_first_not_of(\"noon is 12 p.m.\")"  << " returned: " << location << endl;
   return 0;
} 
