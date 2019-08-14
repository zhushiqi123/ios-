#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{	int a[ 10 ] = { 6, 20, 9, 1, 40, 30, 10, 20, 85, 13 };
	multiset< int, less< int > > iMultiset;    // 整数多重集合
	cout << "There are " << iMultiset.count( 16 )<< " value of 16 in the multiset\n";   
	iMultiset.insert( 16 );   iMultiset.insert( 16 );
	cout << "After inserts, there are "<< iMultiset.count( 16 )
        << " value of 16 in the multiset\n";
	multiset< int, less< int > >::const_iterator result;
	result = iMultiset.find( 16 );  // 查找并返回迭代器
	// 如果迭代器不在结尾，则找到了元素16
	if ( result != iMultiset.end() )   cout << "Found value 16\n";  
	result = iMultiset.find( 20 );
	// 如果迭代器在结尾，则表示没有找到
	if ( result == iMultiset.end() )   cout << "Did not find value 20\n";
	iMultiset.insert( a, a + 10 ); 		// 将数组a插入到multiset中
	cout << "After insert iMultiset contains:\n";
	copy( iMultiset.begin(), iMultiset.end(), ostream_iterator< int > ( cout, " " ) );
	cout << "\nLower bound of 20: "<< *( iMultiset.lower_bound( 20 ) );
	cout << "\nUpper bound of 20: "<< *( iMultiset.upper_bound( 20 ) );
	pair<multiset< int, less< int > >::const_iterator,multiset< int, less< int > >::const_iterator>p;
	p = iMultiset.equal_range( 20 );
	cout<< "\nUsing equal_range of 20:"
		<< "   Lower bound: " << *( p.first )<< "   Upper bound: " << *( p.second );
  return 0;
}
