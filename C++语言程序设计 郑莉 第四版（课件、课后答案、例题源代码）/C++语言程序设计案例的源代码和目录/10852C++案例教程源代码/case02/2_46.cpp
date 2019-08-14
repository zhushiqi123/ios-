#include<iostream>
using namespace std;
int main()  
{  int n=100;
   cout<<"¼¦¹«  ¼¦Ä¸  ¼¦³û"<<endl;
   for ( int i = 1; i <= n; i++ )
	  for ( int j = 1; j <= n; j++ )
	   for( int k = 1; k <= n; k++ )
		   if(( n == 5 * i + 3 * j + k / 3 ) && ( k % 3 == 0 ) && ( n == i + j + k ))
		     cout << i << "  " << j << "  " << k << endl;
   return 0;
}
