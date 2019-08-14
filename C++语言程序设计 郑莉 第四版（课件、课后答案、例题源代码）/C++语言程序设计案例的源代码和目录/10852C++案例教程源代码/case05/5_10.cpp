#include <iostream> 
using namespace std; 
class PriClass 
{	static int num; 				//私有型静态成员
  public: 
	void setnum(int i) { num = i; }; 
	void shownum() { cout << "The num is:"<<num << "\n"; } 
}; 
int PriClass::num; 				//在类外定义 num 
int main() 
{	PriClass a, b; 
	a.shownum();   b.shownum(); 
	a.setnum(1000); 				//设置静态成员num为1000 
	a.shownum();   b.shownum(); 
	return 0; 
}
