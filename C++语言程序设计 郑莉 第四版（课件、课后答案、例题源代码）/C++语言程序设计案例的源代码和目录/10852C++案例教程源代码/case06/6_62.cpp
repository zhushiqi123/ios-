#include <iostream>
#include <cstring> 
using namespace std;
int main()
{  char stra[] = "Happy Birthday to You",strb[ 25 ], strc[ 15 ];
   strcpy( strb, stra );  		// 将stra 的内容拷贝到strb中
   cout << "The string in array stra is: " << stra
        << "\nThe string in array strb is: " << strb << '\n';
   strncpy( strc, stra, 14 );  	//将stra 中前14个字符拷贝到strc 中不拷贝空字符
   strc[ 14 ] = '\0';       	// 添加 '\0'到strc中
   cout << "The string in array strc is: " << strc << endl;
   return 0; 
} 
