#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;
class comp_last //函数对象
{ public:
  bool operator()(int x, int y) const  {    return x % 10 < y % 10;  }
};
int main()
{	const int N = 20;	vector<int> iVector0;
	for (int i = 0; i < N; ++i)		iVector0.push_back(i);
	vector<int> iVector1 = iVector0;
	cout << "Before sorting:\n";
	copy(iVector1.begin(), iVector1.end(), ostream_iterator<int> (cout, " "));
	sort(iVector1.begin(), iVector1.end(), comp_last());//排序
	cout << "\nAfter sorting by last digits with sort:\n";
	copy(iVector1.begin(), iVector1.end(), ostream_iterator<int> (cout, " "));
	iVector1 = iVector0;
	cout << "\nBefore sorting:\n";
	copy(iVector1.begin(), iVector1.end(), ostream_iterator<int> (cout, " "));
	//稳态排序
	stable_sort(iVector1.begin(), iVector1.end(), comp_last());
	cout << "\nAfter sorting by last digits with stable_sort:\n";
	copy(iVector1.begin(), iVector1.end(), ostream_iterator<int> (cout, " "));
	iVector1 = iVector0;
	reverse(iVector1.begin(), iVector1.end());
	cout << "\nBefore sorting:\n";
	copy(iVector1.begin(), iVector1.end(), ostream_iterator<int> (cout, " "));
	//局部排序
	partial_sort(iVector1.begin(), iVector1.begin() + 5,iVector1.end(), comp_last());
	cout << "\nAfter sorting with partial_sort to get 5 values with smallest last digits:\n";
	copy(iVector1.begin(), iVector1.end(), ostream_iterator<int> (cout, " "));
	//局部排序并复制到别处	
	vector<int> iVector2(N);
	partial_sort_copy(iVector1.begin(),iVector1.begin()+8,iVector2.begin(),iVector2.end());
	cout << "\nAfter sorting with partial_sort_copy to get 8 values with smallest last digits:\n";
	copy(iVector2.begin(),iVector2.end(),ostream_iterator<int>(cout," "));
	return 0;
}
