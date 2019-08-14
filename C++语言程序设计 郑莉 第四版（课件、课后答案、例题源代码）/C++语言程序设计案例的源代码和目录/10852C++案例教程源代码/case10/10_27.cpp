#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
int main()
{  const int N = 11;  int Array[N] = {1, 2, 0, 3, 3, 0, 7, 7, 7, 0, 8};  vector<int> ivect;
  cout<<"Array after unique_copy: "<<endl;    
  unique_copy(Array, Array + N, ostream_iterator<int>(cout, " "));//使用通用算法unique_copy
  for (int i = 0; i < N; ++i)    ivect.push_back(Array[i]);
  vector<int>::iterator new_end;
  new_end = unique(ivect.begin(), ivect.end());// 使用通用算法unique
  ivect.erase(new_end, ivect.end());
  cout<<"\nivect after unique: "<<endl;  
  copy(ivect.begin(), ivect.end(),ostream_iterator<int>(cout, " "));
  return 0;
}
