#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void main(void)
{	cout << "RAND_MAX=" << RAND_MAX << endl;
	cout<<"����10�� 0 �� 99�����������:\n";
	for(int i=0; i<10; i++)    cout<<(rand() % 100)<<' ';	//�����100������
	cout << "\nʹ��srand:\n";
	srand( (unsigned)time( NULL ) );
	for( i = 0; i < 10;i++ )    cout<<rand() <<' ';
}
