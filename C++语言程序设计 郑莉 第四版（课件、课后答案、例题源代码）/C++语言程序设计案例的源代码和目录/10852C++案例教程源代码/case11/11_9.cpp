#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{  double root = sqrt( 3.0 ); 							//����3��ƽ����
   cout << "Precision set by precision:\n" << fixed; 		//ʹ��fixed����
   for (int  i = 0; i <= 4; i++ ) 
   {		cout.precision( i );	cout << root << endl; } 	//ʹ��precision��ʾƽ����
   cout << "Precision set by setprecision:" << endl;
   for ( i = 0; i <= 4; i++ )
      	cout << setprecision( 2*i ) << root << endl;  	//ʹ��setprecision�������þ���
   return 0;
}
