#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void main(void)
{	cout << "RAND_MAX=" << RAND_MAX << endl;
	cout<<"产生10个 0 到 99的随机数如下:\n";
	for(int i=0; i<10; i++)    cout<<(rand() % 100)<<' ';	//求除以100的余数
	cout << "\n使用srand:\n";
	srand( (unsigned)time( NULL ) );
	for( i = 0; i < 10;i++ )    cout<<rand() <<' ';
}
