#include <iostream>
using namespace std;
class ZeroExcep 							//�쳣������
{public:
   ZeroExcep() : message( "Exception by dividing zero!" ) {} //�쳣��Ϣ
   const char *what() const    {return message;}
private:
   const char *message;
};
double quotient( int num, int denom )
{  if ( denom == 0 )      throw ZeroExcep();	//�׳��쳣
   return static_cast< double > ( num ) / denom;
}
int main()
{  int num1, num2;
   cout << "Please inut two integers: ";
   while ( cin >> num1 >> num2 ) 
   {try 	 {cout << "The quotient is: " << quotient( num1, num2 ) << endl;}//�׳��쳣
	catch ( ZeroExcep ex ) 	{cout << "Exception is: " << ex.what() << '\n'; }//��׽�쳣
    cout << "Inut two integers: ";
   }
   return 0;      
}
