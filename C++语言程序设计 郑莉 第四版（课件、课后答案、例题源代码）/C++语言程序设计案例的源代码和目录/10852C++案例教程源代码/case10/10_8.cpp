#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{	list<int> list1, list2; //�����յ��б�����
	for (int i=0; i<6; ++i) {list1.push_back(i);list2.push_front(i);}//���б����������Ԫ��
	cout << "list1: ";	copy (list1.begin(), list1.end(), ostream_iterator<int>(cout," "));
	cout << "\nlist2: ";copy (list2.begin(), list2.end(), ostream_iterator<int>(cout," "));
	list2.splice(find(list2.begin(),list2.end(), 3),list1); 
	cout << "\nlist1: ";	copy (list1.begin(), list1.end(), ostream_iterator<int>(cout," "));
	cout << "\nlist2: ";	copy (list2.begin(), list2.end(), ostream_iterator<int>(cout," "));
	list2.splice(list2.end(),	list2, list2.begin());//����һ��Ԫ���Ƶ����
	cout << "\nlist1: ";	copy (list1.begin(), list1.end(), ostream_iterator<int>(cout," "));
	cout << "\nlist2: ";	copy (list2.begin(), list2.end(), ostream_iterator<int>(cout," "));
	list2.sort();	list1 = list2;	//�����б�2�󱣴浽�б�list1��
	list2.unique();				//ɾ���ظ�Ԫ��
	cout << "\nlist1: ";	copy (list1.begin(), list1.end(), ostream_iterator<int>(cout," "));
	cout << "\nlist2: ";copy (list2.begin(), list2.end(), ostream_iterator<int>(cout," "));
	list1.merge(list2); 			//�������������б�ϲ�����һ���б���
	cout << "\nlist1: ";	copy (list1.begin(), list1.end(), ostream_iterator<int>(cout," "));
	cout << "\nlist2: ";	copy (list2.begin(), list2.end(), ostream_iterator<int>(cout," "));
	return 0;
}
