#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{	string str("abcdefghihklmnopqrstuvwxyz");
	vector<char> cvect1(str.begin(), str.end()), cvect2(cvect1.size());
	copy(cvect1.begin(), cvect1.end(),cvect2.begin());		// 使用通用算法Copy
	cout<<"After copy cvect1 to cvect2 : "<<endl; 
	copy(cvect2.begin(),cvect2.end(),ostream_iterator<char>(cout," "));
	copy_backward(cvect1.begin(),cvect1.end()-2,cvect2.end());//使用通用算法copy_backward
	cout<<"\nAfter copy_backward cvect1 to vect3 : "<<endl; 
	copy(cvect2.begin(),cvect2.end(),ostream_iterator<char>(cout," "));
	return 0;
}
