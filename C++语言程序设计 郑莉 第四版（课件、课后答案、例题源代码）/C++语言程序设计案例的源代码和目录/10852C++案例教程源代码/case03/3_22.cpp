#include <iostream> 
using namespace std; 
int myfunc(int i); 
int myfunc(int i, int j=1); 
int main() 
{  	cout << myfunc(4, 5) << " "; 	// �����ڶ�����
  	cout << myfunc(10); 			// ����,���ڶ�����!  
   	return 0; 
} 
int myfunc(int i) {   return i; } 
int myfunc(int i, int j) {   return i*j; }
