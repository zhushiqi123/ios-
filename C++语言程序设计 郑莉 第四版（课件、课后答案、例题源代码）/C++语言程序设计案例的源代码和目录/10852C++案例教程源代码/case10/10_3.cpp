#include <iostream> 
#include <utility>							//����pair����ͷ�ļ�

using namespace std;
int main()
{	pair<int,float> p=make_pair(18,3.14f);		//��������ʼ��pair��������
	cout << p.first << "  " << p.second << endl;//����pair�������ݳ�Ա
	p.first=10;	p.second=1.0f;			//��pair�������p�����ݳ�Ա��ֵ
	cout << p.first << "  " << p.second << endl;	//����pair�������ݳ�Ա
	return 0;
}
