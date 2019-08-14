#include <iostream>
#include <iomanip>
using namespace std;
int main()
{  int num = 80000;
   cout << showbase << setw( 10 ) << num << endl;   			//ÏÔÊ¾ÊýÖµ
   cout << left << setw( 10 ) << num << endl;   				//×ó¶ÔÆë
   cout << internal << setw( 10 )<< num << endl << endl;   		//ÖÐ¼ä¶ÔÆë
   cout << "Using various padding characters:" << endl;
   cout << right;   cout.fill( '*' );   							//Ìí¼ÓÌî²¹×Ö·û*
   cout << setw( 10 ) << dec << num << endl;
   cout << left << setw( 10 ) << setfill( '%' ) << num << endl;   	//Ìí¼ÓÌî²¹×Ö·û%
   cout << internal << setw( 10 ) << setfill( '^' ) << num << endl; 	//Ìí¼ÓÌî²¹×Ö·û^
   return 0;
}
