#include <iostream>
#include <algorithm> 
using namespace std;
int main()
{  const int SIZE = 10;   int Array[ SIZE ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   cout << "Array contains:   ";
   copy( Array, Array + SIZE, ostream_iterator< int > ( cout, " " ) );
   //使用通用算法swap
   swap( Array[ 0 ], Array[ 1 ] );
   cout << "\nArray after swapping Array[0] and Array[1] using swap:   ";
   copy( Array, Array + SIZE, ostream_iterator< int > ( cout, " " ) );
   //使用通用算法iter_swap
   iter_swap( &Array[ 0 ], &Array[ 1 ] );
   cout << "\nArray after swapping Array[0] and Array[1] using iter_swap:   ";
   copy( Array, Array + SIZE, ostream_iterator< int > ( cout, " " ) );
   //使用通用算法swap_ranges
   swap_ranges( Array, Array + 5, Array + 5 );
   cout << "\nArray after swapping the first five elements with the last five elements:   ";
   copy( Array, Array + SIZE, ostream_iterator< int > ( cout, " " ) );
   return 0;
}
