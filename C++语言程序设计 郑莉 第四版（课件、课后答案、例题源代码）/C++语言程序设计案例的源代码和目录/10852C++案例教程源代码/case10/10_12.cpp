#include <iostream>
#include <map>
using namespace std;
int main()
{	multimap< int, double, less< int > > mp;// �����յĶ���ӳ����������ֵΪ����
	cout << "There are " << mp.count( 16 )<< " elements with key 16 in the multimap\n";
	mp.insert( multimap< int, double, less< int > >::value_type( 16, 2.7 ) );
	mp.insert( multimap< int, double, less< int > >::value_type( 16, 99.3 ) );
	cout << "After inserts, there are "<< mp.count( 16 )<< " elements with key 16\n";
	mp.insert( multimap< int, double, less< int > >::value_type( 30, 33.33) );
	mp.insert( multimap< int, double, less< int > >::value_type( 40, 44.44 ) );
	cout << "Multimap mp contains:\nKey\tValue\n";
	//ʹ��ָ��ӳ�������ĵ����������������
	multimap< int, double, less< int > >::const_iterator iter;
	for (  iter= mp.begin();iter != mp.end(); ++iter )
      cout << iter->first << '\t'<< iter->second << '\n';
	return 0;
}
