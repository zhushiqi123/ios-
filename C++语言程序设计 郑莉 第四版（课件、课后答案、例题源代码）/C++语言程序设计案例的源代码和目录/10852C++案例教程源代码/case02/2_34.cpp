#include <iostream> 
using namespace std; 
int main() 
{   int i, count;  
 	for(i=0; i<5; i++)						//���ѭ��
	{  count = 1; 
      for(;;) 
		 {  cout << count << ' ';   	count++; 
         if(count==10) break; 				//��ֹ�ڲ�ѭ��
		 }  
		 cout << '\n'; 
  	} 
  	return 0; 
}
