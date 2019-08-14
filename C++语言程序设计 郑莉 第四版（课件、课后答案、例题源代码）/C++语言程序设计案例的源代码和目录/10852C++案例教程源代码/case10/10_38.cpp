#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
template <typename Container>
Container make(const char s[]){  return Container(&s[0], &s[strlen(s)]);} //函数模板
int main()
{	vector<char> iVector1 = make< vector<char> >("helio world");
	vector<char> iVector2 = make< vector<char> >("hello world");
	//使用通用算法lexicographical_compare比较Vector1和Vector2
	bool result = lexicographical_compare(iVector1.begin(),
          iVector1.end(), iVector2.begin(), iVector2.end());
	if (result == true)	cout << "iVector1 is not lexicographically equal to iVector2" << endl;
	vector<int> iVector3(5);
	for (int i = 0; i < 5; ++i) 	iVector3[i] = i;
	//使用通用算法next_permutation获取下一个排列，比如：
	// 0 1 2, 0 2 1, 1 0 2, 1 2 0, 2 0 1, 2 1 0. 对0 1 2 使用next_permutation 产生 0 2 1:
	next_permutation(iVector3.begin(), iVector3.end());
	copy(iVector3.begin(),iVector3.end(),ostream_iterator<int>(cout," "));	cout << endl;
	//使用通用算法prev_permutation获取上一个排列
	prev_permutation(iVector3.begin(), iVector3.end());
	copy(iVector3.begin(),iVector3.end(),ostream_iterator<int>(cout," "));
	return 0;
}
