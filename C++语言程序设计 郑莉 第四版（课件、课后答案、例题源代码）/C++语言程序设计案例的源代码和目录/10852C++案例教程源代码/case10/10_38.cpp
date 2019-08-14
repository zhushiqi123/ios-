#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
template <typename Container>
Container make(const char s[]){  return Container(&s[0], &s[strlen(s)]);} //����ģ��
int main()
{	vector<char> iVector1 = make< vector<char> >("helio world");
	vector<char> iVector2 = make< vector<char> >("hello world");
	//ʹ��ͨ���㷨lexicographical_compare�Ƚ�Vector1��Vector2
	bool result = lexicographical_compare(iVector1.begin(),
          iVector1.end(), iVector2.begin(), iVector2.end());
	if (result == true)	cout << "iVector1 is not lexicographically equal to iVector2" << endl;
	vector<int> iVector3(5);
	for (int i = 0; i < 5; ++i) 	iVector3[i] = i;
	//ʹ��ͨ���㷨next_permutation��ȡ��һ�����У����磺
	// 0 1 2, 0 2 1, 1 0 2, 1 2 0, 2 0 1, 2 1 0. ��0 1 2 ʹ��next_permutation ���� 0 2 1:
	next_permutation(iVector3.begin(), iVector3.end());
	copy(iVector3.begin(),iVector3.end(),ostream_iterator<int>(cout," "));	cout << endl;
	//ʹ��ͨ���㷨prev_permutation��ȡ��һ������
	prev_permutation(iVector3.begin(), iVector3.end());
	copy(iVector3.begin(),iVector3.end(),ostream_iterator<int>(cout," "));
	return 0;
}
