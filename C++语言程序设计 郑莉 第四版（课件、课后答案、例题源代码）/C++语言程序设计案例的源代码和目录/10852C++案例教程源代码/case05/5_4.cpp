#include <iostream> 
using namespace std; 
int count; 						//����һ��ȫ�ֱ���  
void func1() 
{  void func2();
	cout << "count: " << count<< '\n'; //���Է���ȫ�ֱ���count 
  	func2(); 
} 
void func2() 
{ 	int count; 					//����һ���ֲ����� 
  	for(count=0; count<2; count++) cout << '*'; 
}
int main() 
{  void func1();
	void func2();
	int i; 						//����һ���ֲ�����  
	for(i=0; i<10; i++) { count = i++;  func1();   } 
  	return 0; 
} 
