#include <iostream>
#include <cctype>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
int main ()
{   int iArray[10] = {12, 34, 56, 21, 34, 78, 34, 55, 12, 25};
    cout<<"iArray: "; copy(iArray, iArray + 10, ostream_iterator< int > ( cout, " " ));
    //使用通用算法max_element
    int *maxLoc = max_element(iArray, iArray + 10);
    cout<<"\nLargest element in iArray: "<<*maxLoc<<endl; 
    //使用通用算法min_element
    int *minLoc = min_element(iArray, iArray + 10);
    cout<<"Smallest element in iArray: "<<*minLoc<<endl;
    return 0;
}
