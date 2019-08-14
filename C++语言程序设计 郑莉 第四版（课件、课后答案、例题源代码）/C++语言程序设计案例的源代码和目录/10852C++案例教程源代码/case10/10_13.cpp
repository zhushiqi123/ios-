#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;
template< class T >//用于输出元素
void popElements( T &s ) { while ( !s.empty() ) 	{ cout << s.top() << ' ';   s.pop();}}
int main()
{	stack< int > iDequeStack; 				// 默认情况下以容器deque实现
	stack< int, vector< int > > iVectorStack;	// 以容器Vector实现
	stack< int, list< int > > iListStack;		// 以容器List实现
	for ( int i = 0; i < 10; ++i ) 
	{	iDequeStack.push( i );		iVectorStack.push( i );		iListStack.push( i );	}
	cout << "Popping from iDequeStack: ";		popElements( iDequeStack );
	cout << "\nPopping from iVectorStack: ";	popElements( iVectorStack );
	cout << "\nPopping from iListStack: ";		popElements( iListStack );
	return 0;
}
