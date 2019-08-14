#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
int main()
{   int iArray[15] = {12, 34, 56, 34, 34, 78, 38, 43, 12, 25, 34, 56, 62, 55, 49};   
    vector<int> iVector(iArray, iArray + 15);  
    int list[2] = {34, 56};   
    vector<int>::iterator location; 
    cout<<"iVector: ";  
    copy(iVector.begin(), iVector.end(), ostream_iterator< int > ( cout, " " )); 
    cout<<"\nlist: ";  copy(list, list + 2, ostream_iterator< int > ( cout, " " ));
    location = search(iVector.begin(), iVector.end(),list, list + 2);  //使用通用算法search  
    if(location != iVector.end())   
       cout<<"\nlist found in iVector. \nThe first occurrence of list in iVector " 
            <<"is at position: "<<(location - iVector.begin())<<endl;    
    else  cout<<"\nlist is not in iVector"<<endl;
    location = search_n(iVector.begin(), iVector.end(),2, 34);   //使用通用算法search_n 
    if(location != iVector.end())    
       cout<<"Two consecutive occurrences of 34 found in iVector at position: " 
            <<(location - iVector.begin())<<endl; 
    else   cout<<"Two consecutive occurrences of 34 not in iVector"<<endl;  
    return 0;
}
