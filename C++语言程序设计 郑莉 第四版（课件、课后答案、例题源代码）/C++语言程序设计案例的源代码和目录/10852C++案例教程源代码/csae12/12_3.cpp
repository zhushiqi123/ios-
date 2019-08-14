#include <iostream>
using namespace std;
class ZeroExcep 							//异常处理类
{public:
   ZeroExcep() : message( "Exception by dividing zero!" ) {} //异常信息
   const char *what() const    {return message;}
private:
   const char *message;
};
double quotient( int num, int denom )
{  if ( denom == 0 )      throw ZeroExcep();	//抛出异常
   return static_cast< double > ( num ) / denom;
}
int main()
{  int num1, num2;
   cout << "Please inut two integers: ";
   while ( cin >> num1 >> num2 ) 
   {try 	 {cout << "The quotient is: " << quotient( num1, num2 ) << endl;}//抛出异常
	catch ( ZeroExcep ex ) 	{cout << "Exception is: " << ex.what() << '\n'; }//捕捉异常
    cout << "Inut two integers: ";
   }
   return 0;      
}
