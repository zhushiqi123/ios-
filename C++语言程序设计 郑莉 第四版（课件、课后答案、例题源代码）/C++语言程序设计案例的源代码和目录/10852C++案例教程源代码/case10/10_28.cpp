#include <iostream>
#include <algorithm>  
#include <vector>
using namespace std;
bool greater( int x ){ return x > 9;} //函数对象决定参数是否大于9
int main()
{  	const int SIZE = 10;   int a[ SIZE ] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };
   	vector< int > iVector1( a, a + SIZE );     vector< int >::iterator pNext;
   	cout << "iVector1 before removing all 10s:";
   	copy( iVector1.begin(), iVector1.end(), ostream_iterator< int > ( cout, " " ) ); 
	//使用通用算法remove移除10
   	pNext = remove( iVector1.begin(), iVector1.end(), 10 ); 
   	cout << "\niVector1 after removing all 10s:";
   	copy( iVector1.begin(), pNext, ostream_iterator< int > ( cout, " " )  );
   	vector< int > iVector2( a, a + SIZE ), c( SIZE, 0 );
   	cout << "\niVector2 before removing all 10s and copying:";
   	copy( iVector2.begin(), iVector2.end(), ostream_iterator< int > ( cout, " " ) ); 
	//使用通用算法remove_copy
   	remove_copy( iVector2.begin(), iVector2.end(), c.begin(), 10 );  
   	cout << "\nVector c after removing all 10s from iVector2:";
   	copy( c.begin(), c.end(), ostream_iterator< int > ( cout, " " )  );
   	vector< int > iVector3( a, a + SIZE );
   	cout << "\niVector3 before removing all elements greater than 9:";
   	copy( iVector3.begin(), iVector3.end(), ostream_iterator< int > ( cout, " " )  ); 
	//使用通用算法remove_if
   	pNext = remove_if( iVector3.begin(), iVector3.end(), greater );
   	cout << "\n iVector3 after removing all elements greater than 9:";
   	copy( iVector3.begin(), pNext, ostream_iterator< int > ( cout, " " )  );
   	vector< int > iVector4( a, a + SIZE ), iVector5( SIZE, 0 );
   	cout << "\niVector4 before removing all elements greater than 9 and copying:";
   	copy( iVector4.begin(), iVector4.end(), ostream_iterator< int > ( cout, " " )  ); 
	//使用通用算法remove_copy_if
   	remove_copy_if(iVector4.begin(), iVector4.end(), iVector5.begin(), greater );
   	cout << "\niVector5 after removing all elements greater than 9 from iVector4:";
   	copy( iVector5.begin(), iVector5.end(), ostream_iterator< int > ( cout, " " )  );
   	return 0;
}
