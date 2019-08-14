#include <iostream>   
#include <list>   
#include <algorithm>  
using namespace std;
void main()
{ int A[] = {1, 2, 3, 4, 5};  const int N = sizeof(A) / sizeof(int);
  list<int> iList(A,A+N);
  cout << "List iList contains: ";		//�����ʼ�б�����iList�е�Ԫ��
  copy( iList.begin(), iList.end(), ostream_iterator< int > ( cout, " " ) );	  
  list<int>::iterator pos=iList.begin();	//����ָ���ʼԪ�صĵ�����
  cout<<"\nThe fist element is: "<<*pos;	//�����һ��Ԫ��
  advance(pos,3);						//ǰ������Ԫ�أ�ָ����ĸ�Ԫ��
  cout<<"\nThe 4th element is: "<<*pos;	//������ĸ�Ԫ��
  // �����ǰ������λ�����ʼλ�õľ���
  cout<<"\nThe advanced distance is: "<<distance(iList.begin(),pos);
  iter_swap(iList.begin(),--iList.end()); //�����б������е�һ��Ԫ�غ����һ��Ԫ��
  cout << "\nAfter exchange List iList contains: ";//�������Ԫ�غ��б�����iList�е�Ԫ��
  copy( iList.begin(), iList.end(), ostream_iterator< int > ( cout, " " ) );
}
