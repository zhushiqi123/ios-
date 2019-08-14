#include <iostream>
using namespace std;
int main()
{  int integerValue;
   cout << "Before a bad input operation:" //ÏÔÊ¾cinÁ÷´íÎó×´Ì¬
        << "\ncin.rdstate(): " << cin.rdstate() << "\n    cin.eof(): " << cin.eof()
        << "\t   cin.fail(): " << cin.fail() << "\n    cin.bad(): " << cin.bad()
        << "\t   cin.good(): " << cin.good()
        << "\nExpects an integer, but enter a character: ";
   cin >> integerValue; 
   cout << "After a bad input operation:"  //´íÎóÊäÈëºó£¬ÏÔÊ¾Á÷cin´íÎó×´Ì¬
        << "\ncin.rdstate(): " << cin.rdstate()  << "\n    cin.eof(): " << cin.eof()
        << "\t   cin.fail(): " << cin.fail()  << "\n    cin.bad(): " << cin.bad()
        << "\t   cin.good(): " << cin.good() << endl;
   cin.clear(); 						//Çå³ýÁ÷
   cout << "After cin.clear()"			//Çå³ýÁ÷ºóÏÔÊ¾Á÷´íÎó×´Ì¬
        << "\ncin.fail(): " << cin.fail()<< "; cin.good(): " << cin.good() << endl;
   return 0;
} 
