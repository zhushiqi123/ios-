#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{	vector<string> StrVector;	//Ϊ�ַ��������յ�����
	StrVector.reserve(5);	//Ϊ���Ԫ�ط��������洢�ռ�
	//���ַ���ѹ����������
	StrVector.push_back("Hello,");	StrVector.push_back("What");
	StrVector.push_back("is");		StrVector.push_back("This");
	StrVector.push_back("?");
	//������������е�Ԫ�أ�ͨ���ո����
	copy (StrVector.begin(), StrVector.end(),ostream_iterator<string>(cout," "));
	//���������������Ϣ
	cout << "\n max_size(): " << StrVector.max_size() << "\n size(): " << StrVector.size() << "\n capacity(): " << StrVector.capacity() << endl;
	swap (StrVector[1], StrVector [3]); //�����ڶ����͵��ĸ�Ԫ��
	//��Ԫ��"?"ǰ�����ַ��� "there" 
	StrVector.insert (find(StrVector.begin(),StrVector.end(),"?"),"there");
	StrVector.back() = "!";	//�����һ��Ԫ������Ϊ"!"
	//������������е�Ԫ�أ�ͨ���ո����
	copy (StrVector.begin(), StrVector.end(),ostream_iterator<string>(cout," "));
	//���������������Ϣ
	cout << "\n max_size(): " << StrVector.max_size() << "\n size(): " << StrVector.size()<< "\n capacity(): " << StrVector.capacity() << endl;
	return 0;
}
