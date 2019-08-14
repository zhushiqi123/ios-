#include <iostream>
#include <memory>						//auto_ptr�ඨ��ͷ�ļ�
using namespace std;
class Integer {
public:
   Integer( int i = 0 ): value( i )  {cout << "Constructor for Integer " << value << endl;   } 
   ~Integer()   {     cout << "Destructor for Integer " << value << endl;   } 
   void setInteger( int i ) {     value = i;   } 		//���ú���
   int getInteger() const{     return value;   } 		//��ȡ����
private:
   int value;
}; 
int main()
{  cout << "Creating an auto_ptr object\n";
   auto_ptr< Integer > pInteger( new Integer( 7 ) );	//ʹ��auto_ptr ��ģ����ݶ���
   cout << "Using the auto_ptr to set the Integer\n";
   pInteger->setInteger( 99 );   					//ʹ��auto_ptr��������ֵ
   //ʹ��auto_ptr��ģ���ȡ������ֵ
   cout << "Integer after setInteger: "<< ( *pInteger ).getInteger()
        << "\nTerminating program" << endl;
   return 0;
}  
