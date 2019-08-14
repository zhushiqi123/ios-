#include <iostream>
#include <queue>
#include <functional>
using namespace std;
int main()
{	priority_queue< double > pq;		//创建空的优先队列容器
	pq.push( 3.2 );	pq.push( 9.8 ); pq.push( 5.4 ); //向空的优先队列容器添加元素
	cout << "Popping from pq: ";
   	while ( !pq.empty() ) {cout << pq.top() << ' ';	pq.pop();	} //输出元素后移除元素
	return 0;
}
