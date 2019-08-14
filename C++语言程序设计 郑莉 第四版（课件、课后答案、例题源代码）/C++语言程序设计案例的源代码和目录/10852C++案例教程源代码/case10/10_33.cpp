#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{	int Array[9]={25,7,9,2,0,5,21,15,13};
	vector<int> iVector(Array,Array+9);
	//使用通用算法nth_element将第N个最小元素放置在v.begin() + N
	nth_element(iVector.begin(),iVector.begin() + 3, iVector.end());
	cout << "After nth_element:  ";
	copy(iVector.begin(), iVector.end(), ostream_iterator<int> (cout, " "));
	//使用通用算法random_shuffle混排元素
	random_shuffle(iVector.begin(),iVector.end());
	cout << "\nAfter random_shuffle:  ";
	copy(iVector.begin(), iVector.end(), ostream_iterator<int> (cout, " "));
	return 0;
}
