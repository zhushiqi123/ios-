#include <iostream>
#include <queue>
#include <functional>
using namespace std;
int main()
{	priority_queue< double > pq;		//�����յ����ȶ�������
	pq.push( 3.2 );	pq.push( 9.8 ); pq.push( 5.4 ); //��յ����ȶ����������Ԫ��
	cout << "Popping from pq: ";
   	while ( !pq.empty() ) {cout << pq.top() << ' ';	pq.pop();	} //���Ԫ�غ��Ƴ�Ԫ��
	return 0;
}
