#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int nextNum()	{ static int n = 1;    return n++;}	//������������
int main()
{  vector<int> ivect(8);
   generate(ivect.begin(), ivect.end(), nextNum); 	// ʹ��ͨ���㷨generate
   cout<<"ivect after filling with numbers: "<<endl;  
   copy(ivect.begin(), ivect.end(), ostream_iterator<int> (cout, " "));
   generate_n(ivect.begin(), 3, nextNum);    		// ʹ��ͨ���㷨generate_n
   cout<<"\nivect, after filling the first three elements with the next number: "<<endl;
   copy(ivect.begin(), ivect.end(), ostream_iterator<int> (cout, " "));
   return 0;
}
