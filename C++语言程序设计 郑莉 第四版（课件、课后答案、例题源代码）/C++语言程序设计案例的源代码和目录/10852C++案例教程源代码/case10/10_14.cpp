#include <iostream>
#include <queue>
using namespace std;
int main()
{	queue< double > q;							//�����յĶ�������
	q.push( 3.2 ); q.push( 9.8 ); q.push( 5.4 ); 	//��յĶ����������Ԫ��
	cout << "Popping from q: ";
	while ( !q.empty() ) {cout << q.front() << ' '; q.pop();}  //���Ԫ�غ��Ƴ�Ԫ��
	return 0;
}
