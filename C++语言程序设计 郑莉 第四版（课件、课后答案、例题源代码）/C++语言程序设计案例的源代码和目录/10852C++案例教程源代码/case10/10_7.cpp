#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;
int main()
{	deque<string> StrDeque; 				//Ϊ�ַ��������յ�˫�˶�������
	StrDeque.assign (2, string("middle"));		//�������в���2��Ԫ��
	StrDeque.push_back ("This is last string");	//�������󲿲����ַ���
	StrDeque.push_front ("This is first string");	//������ǰ�˲����ַ���
	copy (StrDeque.begin(), StrDeque.end(),	ostream_iterator<string>(cout,"\n"));
	StrDeque.pop_front();					//�Ƴ���һ��Ԫ��
	StrDeque.pop_back();					//�Ƴ����һ��Ԫ��
	//���ַ���''another'' ���뵽���˵�һ����λ��
	for (int i=1; i<StrDeque.size(); ++i) {StrDeque[i] = "another " + StrDeque [i]; }
	StrDeque.resize (3, "Resized string");		//��������������С
	copy (StrDeque.begin(), StrDeque.end(),ostream_iterator<string>(cout,"\n"));
	return 0;
}
