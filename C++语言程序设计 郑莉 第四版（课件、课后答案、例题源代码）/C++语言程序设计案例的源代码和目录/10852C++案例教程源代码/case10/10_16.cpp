#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{	int a[5] = { 2, 3, 4, 5, 6 };   vector<int> ivector(a,a + 5 );		list<int> ilist(a,a + 5 );
	vector<int>::iterator pvector;	//ָ�����������ĵ�������������ʵ�����
	list<int>::iterator plist;		//ָ���б������ĵ�������˫����ʵ�����
	cout<<"iVector is:\n";
	for (pvector=ivector.begin(); pvector<ivector.end(); ++pvector) 
	{	cout << *pvector << ' ';	}	//ʹ��������ʵ��������Ԫ��
	cout << endl;
	//������ʵ���������-n�ͣ�������
	for (pvector = ivector.begin(); pvector < ivector.end()-1; pvector += 2) 
	{	cout << *pvector << ' ';	}	//ʹ��������ʵ��������Ԫ��
	//˫�������֧��--����
	cout<<"\nIn ilist:\n";	plist=ilist.end();
	cout <<"The last value is:"<< *(--plist) <<endl;
	//plist=ilist.end()-1;//����list��������֧�֣�n����
	//cout <<"The last value is:"<< *plist <<endl;
	return 0;
}
