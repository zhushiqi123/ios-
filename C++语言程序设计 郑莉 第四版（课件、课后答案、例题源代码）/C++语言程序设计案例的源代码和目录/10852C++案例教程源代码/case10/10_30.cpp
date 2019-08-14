#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;
int main()
{  int Array[10] = {1, 3, 5, 7, 9, 0, 2, 4, 6, 8}; 
   list<int> iList(Array, Array + 10),  resultList;   list<int>::iterator listItr;
   cout<<"iList: ";  copy(iList.begin(), iList.end(), ostream_iterator<int> (cout, " "));
   reverse(iList.begin(), iList.end()); //使用通用算法reverse
   cout<<"iList after reversal: \n";  
   copy(iList.begin(), iList.end(), ostream_iterator<int> (cout, " "));
   //使用通用算法reverse_copy
   reverse_copy(iList.begin(), iList.end(),back_inserter(resultList)); 
   cout<<"resultList: \n";   
   copy(resultList.begin(), resultList.end(),ostream_iterator<int> (cout, " ")); 
   listItr = iList.begin();    listItr++;      listItr++; 
   cout<<"iList before rotating: \n";  
   copy(iList.begin(), iList.end(), ostream_iterator<int> (cout, " ")); 
	//使用通用算法rotate
   rotate(iList.begin(), listItr, iList.end()); 
   cout<<"iList after rotating: \n"; 
   copy(iList.begin(), iList.end(), ostream_iterator<int> (cout, " "));
   resultList.clear(); 
   //使用通用算法rotate_copy     
   rotate_copy(iList.begin(), listItr, iList.end(),back_inserter(resultList)); 
   cout<<"iList after rotating and copying: \n";
   copy(iList.begin(), iList.end(), ostream_iterator<int> (cout, " ")); 
   cout<<"resultList after rotating and copying: \n";
   copy(resultList.begin(), resultList.end(),ostream_iterator<int> (cout, " "));
   //使用通用算法rotate_copy 
   resultList.clear(); 
   rotate_copy(iList.begin(),find(iList.begin(), iList.end(), 6), 
               iList.end(),back_inserter(resultList));  
   cout<<"\nresultList after rotating and copying: \n"; 
   copy(resultList.begin(), resultList.end(),ostream_iterator<int> (cout, " ")); 
   return 0;
}
