#include <iostream> 
using namespace std; 
int main() 
{   int i, count;  
 	for(i=0; i<5; i++)						//外层循环
	{  count = 1; 
      for(;;) 
		 {  cout << count << ' ';   	count++; 
         if(count==10) break; 				//终止内层循环
		 }  
		 cout << '\n'; 
  	} 
  	return 0; 
}
