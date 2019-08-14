#include <iostream> 
using namespace std; 
class ArrayElem 
{	int x, y; 
public: 
	ArrayElem(int i, int j) { x = i; y = j; } //构造函数带有两个参数
	int getx() { return x; } 
	int gety() { return y; } 
}; 
int main() 
{	ArrayElem obs[4][2] =  					//使用长的对象数组的初始化形式
	{	ArrayElem(1, 2), ArrayElem(3, 4),  ArrayElem(5, 6), ArrayElem(7, 8), 
		ArrayElem(9, 10), ArrayElem(11, 12), ArrayElem(13, 14), ArrayElem(15, 16) 
	}; 
	for( int i=0; i < 4; i++) 
	{	cout << obs[i][0].getx() << ' ' << obs[i][0].gety() << "\n"; 
		cout << obs[i][1].getx() << ' ' << obs[i][1].gety() << "\n"; 
	} 
	return 0; 
}
