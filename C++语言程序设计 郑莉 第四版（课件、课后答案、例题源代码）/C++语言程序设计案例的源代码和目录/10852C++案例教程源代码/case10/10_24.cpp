#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{   vector<int> ivect(8); 
    fill(ivect.begin(), ivect.end(), 2);  // 使用通用算法fill
    cout<<"After filling ivect with 2's: "<<endl; 
    copy(ivect.begin(), ivect.end(), ostream_iterator<int> (cout, " ")); 
    fill_n(ivect.begin(), 3, 5);  		// 使用通用算法fill_n
    cout<<"\nAfter filling the first three elements with 5's: "<<endl;
    copy(ivect.begin(), ivect.end(), ostream_iterator<int> (cout, " ")); 
    return 0;
}
