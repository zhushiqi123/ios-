#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{  double root = sqrt( 3.0 ); 							//计算3的平方根
   cout << "Precision set by precision:\n" << fixed; 		//使用fixed精度
   for (int  i = 0; i <= 4; i++ ) 
   {		cout.precision( i );	cout << root << endl; } 	//使用precision显示平方根
   cout << "Precision set by setprecision:" << endl;
   for ( i = 0; i <= 4; i++ )
      	cout << setprecision( 2*i ) << root << endl;  	//使用setprecision重新设置精度
   return 0;
}
