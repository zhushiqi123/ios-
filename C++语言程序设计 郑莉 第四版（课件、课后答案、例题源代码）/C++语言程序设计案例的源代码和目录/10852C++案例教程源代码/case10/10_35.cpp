#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{	vector<int> iVector(5);	bool found;
	for (int i = 0; i < 5; ++i) iVector[i] = i; 
 	// ʹ��ͨ���㷨binary_search��������2
	found = binary_search(iVector.begin(), iVector.end(), 2);
	if (found == true)	cout<<"The value 2 is in the vector"<<endl;
	iVector[1] = 7; iVector[2] = 7; iVector[3] = 7; iVector[4] = 8;
	// ʹ��ͨ���㷨lower_bound����7��λ��
	vector<int>::iterator k = lower_bound(iVector.begin(), iVector.end(), 7);
	cout<<"The value is located in:"<<k-iVector.begin()<<endl;
	// ʹ��ͨ���㷨upper_bound����7��λ��
	k = upper_bound(iVector.begin(), iVector.end(), 7);
	cout<<"The value is located in:"<<k-iVector.begin()<<endl;
	// ʹ��ͨ���㷨equal_range����7��λ��
	pair<vector<int>::iterator, vector<int>::iterator> pos = 
		equal_range(iVector.begin(), iVector.end(), 7);
	cout<<"The value is located between:"<<pos.first-iVector.begin()<<" and "
		<<pos.second-iVector.begin()<<endl;
	return 0;
}
