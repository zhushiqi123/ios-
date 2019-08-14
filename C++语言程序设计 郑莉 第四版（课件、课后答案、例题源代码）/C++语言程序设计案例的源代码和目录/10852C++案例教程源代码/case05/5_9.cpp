#include <iostream> 
using namespace std; 
class PubClass 
{ public: 
	static int num; 			//公有静态数据成员的声明
	void shownum() { cout << "The num is:"<<num << endl; } 
}; 
int PubClass::num; 			//在类外定义num 
int main() 
{	PubClass a, b; 
	PubClass::num = 1000;   		//通过类名访问静态成员num 
	a.shownum();   b.shownum(); 
	a.num = 2000;   			//通过对象访问静态成员num 
	a.shownum();   b.shownum(); 
	return 0; 
}
