#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;
template< class T >//�������Ԫ��
void popElements( T &s ) { while ( !s.empty() ) 	{ cout << s.top() << ' ';   s.pop();}}
int main()
{	stack< int > iDequeStack; 				// Ĭ�������������dequeʵ��
	stack< int, vector< int > > iVectorStack;	// ������Vectorʵ��
	stack< int, list< int > > iListStack;		// ������Listʵ��
	for ( int i = 0; i < 10; ++i ) 
	{	iDequeStack.push( i );		iVectorStack.push( i );		iListStack.push( i );	}
	cout << "Popping from iDequeStack: ";		popElements( iDequeStack );
	cout << "\nPopping from iVectorStack: ";	popElements( iVectorStack );
	cout << "\nPopping from iListStack: ";		popElements( iListStack );
	return 0;
}
