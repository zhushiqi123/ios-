#include <iostream>
using namespace std;
int main()
{  char buff[60]; 					//���� 60���ַ�������
   cout << "Enter a sentence: ";   cin.read( buff, 20 );	//ʹ��read�����ַ���buff
   cout << "The entered sentence was: ";
   cout.write( buff,cin.gcount());	//ʹ��write��gcount����ʾbuff�е��ַ�
   return 0;
}
