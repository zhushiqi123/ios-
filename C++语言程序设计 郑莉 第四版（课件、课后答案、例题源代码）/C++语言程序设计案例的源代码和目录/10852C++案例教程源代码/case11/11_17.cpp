#include <iostream>
using namespace std;
int main()
{  int iValue = 8000;   double dValue = 0.0847639;
   cout << "The value of the flags variable is: " << cout.flags();//显示标记值
   cout << "\nThe values in original format:"<< iValue << ',' << dValue << endl ;
   ios_base::fmtflags Original = cout.flags();				//保存标记值
   cout << showbase << oct << scientific; 				//改变格式
   cout << "The value of the flags variable is: " << cout.flags();//显示标记值
   cout << "\nThe values in a new format:"<< iValue << ',' << dValue << endl;
   cout.flags( Original ); 								//恢复格式
   cout << "The restored value of the flags variable is: "<< cout.flags();//显示标记值
   cout << "\nThe values in original format again:"<< iValue << ',' << dValue << endl;
   return 0;
}
