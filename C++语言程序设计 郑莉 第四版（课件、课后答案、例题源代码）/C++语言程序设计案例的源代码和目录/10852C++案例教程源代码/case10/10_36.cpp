#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{	vector<int> iVector1(5);	vector<int> iVector2(5);	vector<int> iVector3(10);
	for (int i = 0; i < 5; ++i) 	iVector1[i] = 3 * i;
	for (i = 0; i < 5; ++i)		iVector2[i] = 1 + 3 * i;
	cout<<"iVector1 is: ";
	copy(iVector1.begin(),iVector1.end(),ostream_iterator<int>(cout," "));
	cout<<"\niVector2 is: ";
	copy(iVector2.begin(),iVector2.end(),ostream_iterator<int>(cout," "));
	//ʹ��ͨ���㷨Merge�ϲ�����iVector1��iVector2���ݣ�����������iVector3��
	merge(iVector1.begin(), iVector1.end(),iVector2.begin(), iVector2.end(), iVector3.begin());
	cout<<"\niVector3 is: ";
	copy(iVector3.begin(),iVector3.end(),ostream_iterator<int>(cout," "));
	for (i = 0; i < 5; ++i)	iVector3[i] = iVector1[i];
	for (i = 0; i < 5; ++i)	iVector3[i + 5] = iVector2[i];
	//ʹ��ͨ���㷨inplace_merge�ϲ�������������õ���������iVector3
	cout<<"\nAfter sorted, iVector3 is: ";
	inplace_merge(iVector3.begin(), iVector3.begin() + 5,iVector3.end());
	copy(iVector3.begin(),iVector3.end(),ostream_iterator<int>(cout," "));
	return 0;
}
