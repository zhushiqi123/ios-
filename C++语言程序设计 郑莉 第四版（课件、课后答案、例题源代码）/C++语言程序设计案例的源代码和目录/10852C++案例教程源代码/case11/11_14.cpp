#include <iostream>
using namespace std;
int main()
{  double x = 0.0001234567;   double y = 1.846e8;
   //����Ĭ�ϸ�ʽ��ʾ
   cout << "Displayed in default format:\n" << x << '\t' << y << endl;
   //����ѧ��������ʾ
   cout << "Displayed in scientific format:\n" << scientific << x << '\t' << y << endl;
   //�������ʽ��ʾ
   cout << "Displayed in fixed format:\n" << fixed << x << '\t' << y << endl;
   return 0;
}
