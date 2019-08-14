#include <iostream> 
using namespace std; 
class FunClass 
{	static int count; 					 //静态数据成员声明
public: 
	FunClass() { count++;    cout << "Constructing object " <<count << endl;   } 
	~FunClass() { cout << "Destroying object " << count << endl;     count--;   } 
	static int GetCount() { return count; } //静态函数成员
}; 
int FunClass::count; 					 //静态数据成员定义
int main() 
{	FunClass a, b, c; 
	cout << "From Class, there are now " << FunClass::GetCount() << " in existence.\n"; 
	cout << "From Object, there are now " << a.GetCount() <<" in existence.\n"; 
	return 0; 
}
