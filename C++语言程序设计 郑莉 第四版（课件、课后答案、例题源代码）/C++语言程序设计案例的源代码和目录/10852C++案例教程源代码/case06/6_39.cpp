#include <iostream> 
using namespace std; 
class NumClass 
{	int num; 
public: 
	void set_num(int val) { num = val; } 
	void show_num(){ cout << "The num is:"<<num << "\n"; } 
}; 
int main() 
{	NumClass ob, *p; 				//声明一个对象和指向对象的指针 
	ob.set_num(10);   ob.show_num();	//通过对象ob直接调用成员函数 
	p = &ob;						//使对象指针p指向对象ob 
	p->set_num(20);  p->show_num(); 	//通过指针调用成员函数 
	return 0; 
}
