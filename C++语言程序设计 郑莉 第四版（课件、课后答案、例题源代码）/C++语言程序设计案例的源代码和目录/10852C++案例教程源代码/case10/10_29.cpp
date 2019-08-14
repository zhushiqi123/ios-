#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool greater( int x ){   return x > 9;} 
int main()
{  const int SIZE = 10;   int a[ SIZE ] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };
   vector< int > iVector1( a, a + SIZE );
   cout << "iVector1 before replacing all 10s: ";
   copy( iVector1.begin(), iVector1.end(), ostream_iterator< int > ( cout, " " ) );
   //使用通用算法replace
   replace( iVector1.begin(), iVector1.end(), 10, 100 );
   cout << "\niVector1 after replacing 10s with 100s: ";
   copy( iVector1.begin(), iVector1.end(), ostream_iterator< int > ( cout, " " ) );
   vector< int > iVector2( a, a + SIZE ), iVector3( SIZE );
   cout << "\nVector2 before replacing all 10s and copying: ";
   copy( iVector2.begin(), iVector2.end(), ostream_iterator< int > ( cout, " " ) );
   //使用通用算法replace_copy
   replace_copy(iVector2.begin(), iVector2.end(), iVector3.begin(), 10, 100 );
   cout << "\niVector3 after replacing all 10s in iVector2: ";
   copy( iVector3.begin(), iVector3.end(), ostream_iterator< int > ( cout, " " ) );
   vector< int > iVector4( a, a + SIZE );
   cout << "\niVector4 before replacing values greater than 9: ";
   copy( iVector4.begin(), iVector4.end(), ostream_iterator< int > ( cout, " " ) );
   //使用通用算法replace_if
   replace_if( iVector4.begin(), iVector4.end(), greater, 100 );
   cout << "\niVector4 after replacing all values greater than 9 with 100s: ";
   copy( iVector4.begin(), iVector4.end(), ostream_iterator< int > ( cout, " " ) );
   vector< int > iVector5( a, a + SIZE ), iVector6( SIZE );
   cout << "\niVector5 before replacing all values greater than 9 and copying: ";
   copy( iVector5.begin(), iVector5.end(), ostream_iterator< int > ( cout, " " ) );
   //使用通用算法replace_copy_if
   replace_copy_if(iVector5.begin(), iVector5.end(), iVector6.begin(), greater, 100 );
   cout << "\niVector6 after replacing all values greater than 9 in iVector5: ";
   copy( iVector6.begin(), iVector6.end(), ostream_iterator< int > ( cout, " " ) );
   return 0;
}
