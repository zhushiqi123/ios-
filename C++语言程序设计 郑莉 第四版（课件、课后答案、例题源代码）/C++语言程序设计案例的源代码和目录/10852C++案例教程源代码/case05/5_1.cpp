#include <iostream> 
using namespace std; 
//����num����ÿ�ν��뺯��fun()ʱ���г�ʼ�� 
void fun() 
{ 	int num = 10; 
  	cout << num << "\n"; 
  	num++;               // ������û�г���Ч�� 
}
int main() 	
{ for(int i=0; i < 3; i++) fun();   return 0; } 
