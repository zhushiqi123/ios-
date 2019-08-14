#include <iostream> 
using namespace std; 
int main() 
{ 	int i = 10, j = 30; 
	if(j > 0) 
	{ int i;    // 内部的i 将隐藏或屏蔽外层的i 
    	 i = j / 2;   cout << "inner variable i: " << i << '\n'; 
  	} 
  	cout << "outer variable i: " << i << '\n'; 
  	return 0; 
}
