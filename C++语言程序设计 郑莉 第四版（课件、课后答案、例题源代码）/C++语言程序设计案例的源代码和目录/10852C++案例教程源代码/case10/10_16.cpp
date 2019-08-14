#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{	int a[5] = { 2, 3, 4, 5, 6 };   vector<int> ivector(a,a + 5 );		list<int> ilist(a,a + 5 );
	vector<int>::iterator pvector;	//指向向量容器的迭代器是随机访问迭代器
	list<int>::iterator plist;		//指向列表容器的迭代器是双向访问迭代器
	cout<<"iVector is:\n";
	for (pvector=ivector.begin(); pvector<ivector.end(); ++pvector) 
	{	cout << *pvector << ' ';	}	//使用随机访问迭代器输出元素
	cout << endl;
	//随机访问迭代器允许-n和＋＝操作
	for (pvector = ivector.begin(); pvector < ivector.end()-1; pvector += 2) 
	{	cout << *pvector << ' ';	}	//使用随机访问迭代器输出元素
	//双向迭代器支持--操作
	cout<<"\nIn ilist:\n";	plist=ilist.end();
	cout <<"The last value is:"<< *(--plist) <<endl;
	//plist=ilist.end()-1;//错误：list迭代器不支持＋n操作
	//cout <<"The last value is:"<< *plist <<endl;
	return 0;
}
