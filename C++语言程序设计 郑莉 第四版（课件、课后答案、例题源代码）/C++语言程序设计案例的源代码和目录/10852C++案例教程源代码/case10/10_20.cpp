#include <iostream>
#include <cctype>
#include <algorithm>
#include <vector>
using namespace std;
int main ()
{   char cList[10] = {'Z', 'a', 'Z', 'B', 'Z','c', 'D', 'e', 'F', 'Z'}; 
    vector<char> charList(cList, cList + 10); 
    cout<<"charList: ";    
    copy(charList.begin(), charList.end(), ostream_iterator< char > ( cout, " " ));  
    int NumZs = count(charList.begin(), charList.end(),'Z');   //使用通用算法count
    cout<<"\nNumber of Z\'s in charList:"<<NumZs<<endl;     
    int NumUpper = count_if(charList.begin(),charList.end(), isupper); 
                                                            //使用通用算法count_if
    cout<<"Number of uppercase letters in charList: "<<NumUpper<<endl; 
    return 0;
}
