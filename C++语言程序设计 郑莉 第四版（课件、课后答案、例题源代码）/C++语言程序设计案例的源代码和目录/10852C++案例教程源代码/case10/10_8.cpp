#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{	list<int> list1, list2; //创建空的列表容器
	for (int i=0; i<6; ++i) {list1.push_back(i);list2.push_front(i);}//向列表容器中添加元素
	cout << "list1: ";	copy (list1.begin(), list1.end(), ostream_iterator<int>(cout," "));
	cout << "\nlist2: ";copy (list2.begin(), list2.end(), ostream_iterator<int>(cout," "));
	list2.splice(find(list2.begin(),list2.end(), 3),list1); 
	cout << "\nlist1: ";	copy (list1.begin(), list1.end(), ostream_iterator<int>(cout," "));
	cout << "\nlist2: ";	copy (list2.begin(), list2.end(), ostream_iterator<int>(cout," "));
	list2.splice(list2.end(),	list2, list2.begin());//将第一个元素移到最后
	cout << "\nlist1: ";	copy (list1.begin(), list1.end(), ostream_iterator<int>(cout," "));
	cout << "\nlist2: ";	copy (list2.begin(), list2.end(), ostream_iterator<int>(cout," "));
	list2.sort();	list1 = list2;	//排序列表2后保存到列表list1中
	list2.unique();				//删除重复元素
	cout << "\nlist1: ";	copy (list1.begin(), list1.end(), ostream_iterator<int>(cout," "));
	cout << "\nlist2: ";copy (list2.begin(), list2.end(), ostream_iterator<int>(cout," "));
	list1.merge(list2); 			//将两个排序后的列表合并到第一个列表中
	cout << "\nlist1: ";	copy (list1.begin(), list1.end(), ostream_iterator<int>(cout," "));
	cout << "\nlist2: ";	copy (list2.begin(), list2.end(), ostream_iterator<int>(cout," "));
	return 0;
}
