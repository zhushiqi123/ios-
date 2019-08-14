#include <iostream>
using namespace std;
int main()
{  double x = 0.0001234567;   double y = 1.846e8;
   //按照默认格式显示
   cout << "Displayed in default format:\n" << x << '\t' << y << endl;
   //按科学计数法显示
   cout << "Displayed in scientific format:\n" << scientific << x << '\t' << y << endl;
   //按定点格式显示
   cout << "Displayed in fixed format:\n" << fixed << x << '\t' << y << endl;
   return 0;
}
