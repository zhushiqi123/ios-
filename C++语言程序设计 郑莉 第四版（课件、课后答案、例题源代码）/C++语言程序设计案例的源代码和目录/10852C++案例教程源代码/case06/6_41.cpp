#include <iostream>
using namespace std;
class ThisPointer 
{	int x;
public:
	ThisPointer( int = 0 );    				   //��Ĭ���β�ֵ�Ĺ��캯��
	void Disp() const;
}; 
ThisPointer::ThisPointer( int value ): x( value ) { } //���캯����ʼ�����ݳ�Աx 
void ThisPointer::Disp() const   
{ cout << "        x = " << x;				   //���1����ʽʹ��thisָ��
  cout << "\n  this->x = " << this->x;		   //���2����ʽʹ��thisָ��
  cout << "\n(*this).x = " << ( *this ).x << endl;//���3����ʽʹ��thisָ��
} 
int main(){  ThisPointer ThisObject( 10 );   ThisObject.Disp();   return 0;} 
