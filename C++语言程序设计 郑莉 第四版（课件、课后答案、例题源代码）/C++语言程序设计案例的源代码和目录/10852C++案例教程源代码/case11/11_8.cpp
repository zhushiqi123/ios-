#include <iostream>
#include <iomanip>
using namespace std;
int main()
{  int num;   cout << "Enter a decimal number: ";   cin >> num; //��������
   //ʹ��hex�����ݷ���ʾʮ����������
   cout << num << " in hexadecimal format is: " << hex<< num << endl;
   //ʹ��oct�����ݷ���ʾ�˽�������
   cout << dec << num << " in octal format is: "<< oct << num << endl;
   //ʹ��setbase�����ݷ���ʾʮ��������
   cout << setbase(10) << num << " in decimal format is: " << num << endl;
   return 0;
}
