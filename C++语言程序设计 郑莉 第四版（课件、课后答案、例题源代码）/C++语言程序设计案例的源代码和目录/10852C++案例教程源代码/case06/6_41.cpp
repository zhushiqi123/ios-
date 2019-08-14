#include <iostream>
using namespace std;
class ThisPointer 
{	int x;
public:
	ThisPointer( int = 0 );    				   //带默认形参值的构造函数
	void Disp() const;
}; 
ThisPointer::ThisPointer( int value ): x( value ) { } //构造函数初始化数据成员x 
void ThisPointer::Disp() const   
{ cout << "        x = " << x;				   //语句1：隐式使用this指针
  cout << "\n  this->x = " << this->x;		   //语句2：显式使用this指针
  cout << "\n(*this).x = " << ( *this ).x << endl;//语句3：显式使用this指针
} 
int main(){  ThisPointer ThisObject( 10 );   ThisObject.Disp();   return 0;} 
