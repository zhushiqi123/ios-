#include <iostream> 
using namespace std; 
int count; 						//这是一个全局变量  
void func1() 
{  void func2();
	cout << "count: " << count<< '\n'; //可以访问全局变量count 
  	func2(); 
} 
void func2() 
{ 	int count; 					//这是一个局部变量 
  	for(count=0; count<2; count++) cout << '*'; 
}
int main() 
{  void func1();
	void func2();
	int i; 						//这是一个局部变量  
	for(i=0; i<10; i++) { count = i++;  func1();   } 
  	return 0; 
} 
