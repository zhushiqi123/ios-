#include <iostream> 
using namespace std;
void swap(float &, float &); 					//������ԭ������
int main()
{ float a = 22.2f, b = 44.4f;
  cout << "Before calling swap(a,b), a = " << a << ", b = " << b << endl;
  swap(a,b);  cout << "After calling swap(a,b), a = " << a << ", b = " << b << endl;
  return 0;
}
void swap(float &x, float &y){  float temp = x;  x = y;  y = temp;} //����x �� y��ֵ
