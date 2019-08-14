#include <iostream>
#include <queue>
using namespace std;
int main()
{	queue< double > q;							//创建空的队列容器
	q.push( 3.2 ); q.push( 9.8 ); q.push( 5.4 ); 	//向空的队列容器添加元素
	cout << "Popping from q: ";
	while ( !q.empty() ) {cout << q.front() << ' '; q.pop();}  //输出元素后移除元素
	return 0;
}
