#include <iostream> 
using namespace std; 
int main() 
{	typedef int integer; 			//将类型int重新命名为integer
  	integer i; 					//使用integer定义变量
  	cout<<"The numbers are as follows:"<<endl; 
	for(i=0; i<=50; i++) { if(i%3) continue;     cout << i << ' '; } 
  	return 0; 
}
