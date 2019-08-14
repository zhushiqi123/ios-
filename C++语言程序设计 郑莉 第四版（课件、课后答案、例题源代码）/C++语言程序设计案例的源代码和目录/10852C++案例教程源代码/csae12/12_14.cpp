#include <iostream>
#include <memory>						//auto_ptr类定义头文件
using namespace std;
class Integer {
public:
   Integer( int i = 0 ): value( i )  {cout << "Constructor for Integer " << value << endl;   } 
   ~Integer()   {     cout << "Destructor for Integer " << value << endl;   } 
   void setInteger( int i ) {     value = i;   } 		//设置函数
   int getInteger() const{     return value;   } 		//获取函数
private:
   int value;
}; 
int main()
{  cout << "Creating an auto_ptr object\n";
   auto_ptr< Integer > pInteger( new Integer( 7 ) );	//使用auto_ptr 类模板操纵对象
   cout << "Using the auto_ptr to set the Integer\n";
   pInteger->setInteger( 99 );   					//使用auto_ptr来设置数值
   //使用auto_ptr类模板获取整型数值
   cout << "Integer after setInteger: "<< ( *pInteger ).getInteger()
        << "\nTerminating program" << endl;
   return 0;
}  
