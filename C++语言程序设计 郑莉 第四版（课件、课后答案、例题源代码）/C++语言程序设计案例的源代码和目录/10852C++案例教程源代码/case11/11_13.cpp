#include <iostream>
#include <iomanip>
using namespace std;
int main()
{  int num = 80000;
   cout << showbase << setw( 10 ) << num << endl;   			//��ʾ��ֵ
   cout << left << setw( 10 ) << num << endl;   				//�����
   cout << internal << setw( 10 )<< num << endl << endl;   		//�м����
   cout << "Using various padding characters:" << endl;
   cout << right;   cout.fill( '*' );   							//�����ַ�*
   cout << setw( 10 ) << dec << num << endl;
   cout << left << setw( 10 ) << setfill( '%' ) << num << endl;   	//�����ַ�%
   cout << internal << setw( 10 ) << setfill( '^' ) << num << endl; 	//�����ַ�^
   return 0;
}
