#include <iostream>
using namespace std;
int main()
{  int integerValue;
   cout << "Before a bad input operation:" //��ʾcin������״̬
        << "\ncin.rdstate(): " << cin.rdstate() << "\n    cin.eof(): " << cin.eof()
        << "\t   cin.fail(): " << cin.fail() << "\n    cin.bad(): " << cin.bad()
        << "\t   cin.good(): " << cin.good()
        << "\nExpects an integer, but enter a character: ";
   cin >> integerValue; 
   cout << "After a bad input operation:"  //�����������ʾ��cin����״̬
        << "\ncin.rdstate(): " << cin.rdstate()  << "\n    cin.eof(): " << cin.eof()
        << "\t   cin.fail(): " << cin.fail()  << "\n    cin.bad(): " << cin.bad()
        << "\t   cin.good(): " << cin.good() << endl;
   cin.clear(); 						//�����
   cout << "After cin.clear()"			//���������ʾ������״̬
        << "\ncin.fail(): " << cin.fail()<< "; cin.good(): " << cin.good() << endl;
   return 0;
} 
