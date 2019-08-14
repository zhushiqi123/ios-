#include <iostream>   
#include <list>   
#include <algorithm>  
using namespace std;
void main()
{ int A[] = {1, 2, 3, 4, 5};  const int N = sizeof(A) / sizeof(int);
  list<int> iList(A,A+N);
  cout << "List iList contains: ";		//输出初始列表容器iList中的元素
  copy( iList.begin(), iList.end(), ostream_iterator< int > ( cout, " " ) );	  
  list<int>::iterator pos=iList.begin();	//定义指向初始元素的迭代器
  cout<<"\nThe fist element is: "<<*pos;	//输出第一个元素
  advance(pos,3);						//前进三个元素，指向第四个元素
  cout<<"\nThe 4th element is: "<<*pos;	//输出第四个元素
  // 输出当前迭代器位置与初始位置的距离
  cout<<"\nThe advanced distance is: "<<distance(iList.begin(),pos);
  iter_swap(iList.begin(),--iList.end()); //交换列表容器中第一个元素和最后一个元素
  cout << "\nAfter exchange List iList contains: ";//输出交换元素后列表容器iList中的元素
  copy( iList.begin(), iList.end(), ostream_iterator< int > ( cout, " " ) );
}
