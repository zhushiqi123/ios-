#include <iostream>
#include <cstring> 
using namespace std;
int main()
{  char stra[] = "Happy Birthday to You",strb[ 25 ], strc[ 15 ];
   strcpy( strb, stra );  		// ��stra �����ݿ�����strb��
   cout << "The string in array stra is: " << stra
        << "\nThe string in array strb is: " << strb << '\n';
   strncpy( strc, stra, 14 );  	//��stra ��ǰ14���ַ�������strc �в��������ַ�
   strc[ 14 ] = '\0';       	// ��� '\0'��strc��
   cout << "The string in array strc is: " << strc << endl;
   return 0; 
} 
