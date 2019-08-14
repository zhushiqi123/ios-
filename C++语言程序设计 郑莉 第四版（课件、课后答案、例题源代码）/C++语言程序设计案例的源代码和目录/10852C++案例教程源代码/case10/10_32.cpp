#include <iostream>
#include <cctype>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
void doubleNum(int& num){    num = 2 * num;     cout<<num<<" ";}
int main()
{   char cArray[5] = {'a', 'b', 'c', 'd', 'e'}; 
    vector<char> cList(cArray, cArray + 5); 
    cout<<"cList: ";   
    copy(cList.begin(), cList.end(), ostream_iterator<char> (cout, " "));
    transform(cList.begin(), cList.end(),cList.begin(), toupper);//使用通用算法transform
    cout<<"\ncList after changing all lowercase letters to uppercase: ";
    copy(cList.begin(), cList.end(), ostream_iterator<char> (cout, " ")); 
    int list[7] = {2, 8, 5, 1, 7, 11, 3};
    cout<<"\nlist: ";   copy(list, list + 7, ostream_iterator<int> (cout, " "));
    cout<<"\nThe effect of the for_each function: "; 
    for_each(list, list + 7, doubleNum);     //使用通用算法for_each
    cout<<"\nlist after a call to the for_each function: "; 
    copy(list, list + 7, ostream_iterator<int> (cout, " "));
    return 0;
}
