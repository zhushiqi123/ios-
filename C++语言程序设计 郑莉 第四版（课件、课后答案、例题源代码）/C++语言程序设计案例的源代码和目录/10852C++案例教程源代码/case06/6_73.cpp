#include <iostream>
#include <string>
using namespace std;
int main()
{  string str( "noon is 12 p.m." );   int location;
   cout << "Original string:\n" << str << "\n(find) \"is\" was found at: " 
        << str.find( "is" ) 							//���1����λ��5���� "is"
        << "\n(rfind) \"is\" was found at: " << str.rfind( "is" ); //���2����λ��5���� "is"
   location = str.find_first_of( "misop" ); 				//���3����λ��1����'o'
   cout << "\n (find_first_of) found '" << str[ location ]
        << "' from the group \"misop\" at: " << location;
   location = str.find_last_of( "misop" ); 				//���4����λ��13����'m'
   cout << "\n (find_last_of) found '" << str[ location ] 
        << "' from the group \"misop\" at: "<< location;
   location = str.find_first_not_of( "noi spm" ); 			//���5����λ��8���� '1'
   cout << "\n (find_first_not_of) '" << str[ location ]
        << "' is not contained in \"noi spm\" and was found at:" << location;
   location = str.find_first_not_of( "12noi spm" );  		//���6����λ��12���� '.'
   cout << "\n(find_first_not_of) '" << str[ location ]
        << "' is not contained in \"12noi spm\" and was " << " at:" << location << endl;
   location = str.find_first_not_of( "noon is 12 p.m." );   //���7�����Ҳ���str�е��ַ�
   cout << "\nfind_first_not_of(\"noon is 12 p.m.\")"  << " returned: " << location << endl;
   return 0;
} 
