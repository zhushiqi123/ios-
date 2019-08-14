#include <iostream>
#include <map>
using namespace std;
int main()
{	multimap< int, double, less< int > > mp;// 创建空的多重映射容器：键值为整型
	cout << "There are " << mp.count( 16 )<< " elements with key 16 in the multimap\n";
	mp.insert( multimap< int, double, less< int > >::value_type( 16, 2.7 ) );
	mp.insert( multimap< int, double, less< int > >::value_type( 16, 99.3 ) );
	cout << "After inserts, there are "<< mp.count( 16 )<< " elements with key 16\n";
	mp.insert( multimap< int, double, less< int > >::value_type( 30, 33.33) );
	mp.insert( multimap< int, double, less< int > >::value_type( 40, 44.44 ) );
	cout << "Multimap mp contains:\nKey\tValue\n";
	//使用指向映射容器的迭代器输出容器内容
	multimap< int, double, less< int > >::const_iterator iter;
	for (  iter= mp.begin();iter != mp.end(); ++iter )
      cout << iter->first << '\t'<< iter->second << '\n';
	return 0;
}
