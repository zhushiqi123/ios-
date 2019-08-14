#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{	vector<int> iVector(5);	bool found;
	for (int i = 0; i < 5; ++i) iVector[i] = i; 
 	// 使用通用算法binary_search查找整数2
	found = binary_search(iVector.begin(), iVector.end(), 2);
	if (found == true)	cout<<"The value 2 is in the vector"<<endl;
	iVector[1] = 7; iVector[2] = 7; iVector[3] = 7; iVector[4] = 8;
	// 使用通用算法lower_bound查找7的位置
	vector<int>::iterator k = lower_bound(iVector.begin(), iVector.end(), 7);
	cout<<"The value is located in:"<<k-iVector.begin()<<endl;
	// 使用通用算法upper_bound查找7的位置
	k = upper_bound(iVector.begin(), iVector.end(), 7);
	cout<<"The value is located in:"<<k-iVector.begin()<<endl;
	// 使用通用算法equal_range查找7的位置
	pair<vector<int>::iterator, vector<int>::iterator> pos = 
		equal_range(iVector.begin(), iVector.end(), 7);
	cout<<"The value is located between:"<<pos.first-iVector.begin()<<" and "
		<<pos.second-iVector.begin()<<endl;
	return 0;
}
