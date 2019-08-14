#include <iostream> 
using namespace std; 
class ArrayElem 
{	int x; 
public: 
	ArrayElem(int i) { x = i; } 			//带有参数的构造函数
	int getx() { return x; } 
}; 
int main() 
{ 	ArrayElem obs[4] = { -1, -2, -3, -4 }; 	//简化的初始化对象数组方式
	for(int i=0; i < 4; i++)    cout << "obs[" << i << "].getx(): " << obs[i].getx() << "\n"; 
	return 0; 
}
