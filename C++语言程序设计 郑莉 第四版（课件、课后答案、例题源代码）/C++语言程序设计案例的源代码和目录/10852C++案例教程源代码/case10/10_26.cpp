#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
bool Largerthan(int n) { return (n > 40); }//函数对象
int main()
{ const int N = 7;
  int Array0[N] = {50, 30, 10, 70, 60, 40, 20},Array1[N];
  copy(&Array0[0], &Array0[N], &Array1[0]);
  cout << "Original sequence:"<<endl;
  copy(&Array1[0], &Array1[N], ostream_iterator<int> (cout, " ")); 
  int* split = partition(&Array1[0], &Array1[N], Largerthan);//使用通用算法partition
  cout << "\nResult of (unstable) partitioning: "<<endl;
  copy(&Array1[0], split, ostream_iterator<int> (cout, " "));   cout << "| ";
  copy(split, &Array1[N], ostream_iterator<int> (cout, " "));  
  copy(&Array0[0], &Array0[N], &Array1[0]);
  split=stable_partition(&Array1[0],&Array1[N],Largerthan);//使用通用算法stable_partition
  cout << "\nResult of stable partitioning:     "<<endl;
  copy(&Array1[0], split, ostream_iterator<int> (cout, " "));   cout << "| ";
  copy(split, &Array1[N], ostream_iterator<int> (cout, " ")); 
  return 0;
}
