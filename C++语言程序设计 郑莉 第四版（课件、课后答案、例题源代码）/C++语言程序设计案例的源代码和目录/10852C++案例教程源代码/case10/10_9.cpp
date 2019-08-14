#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{   double a[5] = { 2.2, 3.3, 4.4, 5.5, 16.6 };   
    set<double,less< double > > doubleSet( a,a + 5 );
    cout << "doubleSet contains: ";
    copy( doubleSet.begin(), doubleSet.end(), ostream_iterator< double > ( cout, " " ) );
    pair< typedef set< double, less< double > >::const_iterator, bool > p;
    p = doubleSet.insert( 13.8 ); // 向集合容器中插入13.8
    cout << '\n' << *( p.first ) << ( p.second ? " was" : " was not" ) << " inserted";
    cout << "\ndoubleSet contains: ";
    copy( doubleSet.begin(), doubleSet.end(), ostream_iterator< double > ( cout, " " ) );
    p = doubleSet.insert( 5.5 );  // 向集合容器中插入已经存在的5.5
    cout << '\n' << *( p.first ) << ( p.second ? " was" : " was not" ) << " inserted";
    cout << "\ndoubleSet contains: ";
    copy( doubleSet.begin(), doubleSet.end(), ostream_iterator< double > ( cout, " " ) );
	cout << "\nlower_bound(3.5): " << *doubleSet.lower_bound(3.5) << endl;
	cout << "upper_bound(3.5): " << *doubleSet.upper_bound(3.5) << endl;
	cout << "equal_range(3.5): " << *doubleSet.equal_range(3.5).first << " "
		<< *doubleSet.equal_range(3.5).second << endl;
	cout << "lower_bound(9.5): " << *doubleSet.lower_bound(6.5) << endl;
	cout << "upper_bound(9.5): " << *doubleSet.upper_bound(6.5) << endl;
	cout << "equal_range(9.5): " << *doubleSet.equal_range(6.5).first << " "
		<< *doubleSet.equal_range(9.5).second << endl;
	return 0;
}
