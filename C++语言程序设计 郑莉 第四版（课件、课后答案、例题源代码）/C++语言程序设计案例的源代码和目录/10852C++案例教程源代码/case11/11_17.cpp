#include <iostream>
using namespace std;
int main()
{  int iValue = 8000;   double dValue = 0.0847639;
   cout << "The value of the flags variable is: " << cout.flags();//��ʾ���ֵ
   cout << "\nThe values in original format:"<< iValue << ',' << dValue << endl ;
   ios_base::fmtflags Original = cout.flags();				//������ֵ
   cout << showbase << oct << scientific; 				//�ı��ʽ
   cout << "The value of the flags variable is: " << cout.flags();//��ʾ���ֵ
   cout << "\nThe values in a new format:"<< iValue << ',' << dValue << endl;
   cout.flags( Original ); 								//�ָ���ʽ
   cout << "The restored value of the flags variable is: "<< cout.flags();//��ʾ���ֵ
   cout << "\nThe values in original format again:"<< iValue << ',' << dValue << endl;
   return 0;
}
