#include <iostream> 
using namespace std;
void ComCircle(double&, double&, double); //������ԭ������
int main()
{ double r, a, c;
  cout << "Enter radius: ";  cin >> r;
  ComCircle(a, c, r);
  cout << "The area = " << a << ", and the circumference = " << c << endl;
  return 0;
}
void ComCircle(double& area, double& circum, double r) //ͨ�����ñ�������������ܳ�
{ const double PI = 3.141592653589793;
  area = PI*r*r;  circum = 2*PI*r;				//����������ܳ�
}
