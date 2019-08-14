#include <iostream> 
using namespace std; 
class Cylinder; 						   // 前向引用声明 
enum Colors { red, green, yellow }; 		   //定义颜色枚举类型
class Cube 
{ 	Colors color; 
public: 
	Cube(Colors c) { color = c; } 
	friend bool TestSame(Cube x, Cylinder y); //声明为Cube的友元函数
}; 
class Cylinder 
{ 	Colors color; 
public: 
	Cylinder(Colors c) { color= c; } 
	friend bool TestSame(Cube x, Cylinder y); //声明为Cylinder的友元函数
}; 
bool TestSame(Cube x, Cylinder y) { if(x.color == y.color) return true;   else return false; }  
int main() 
{	Cube cube1(red),  cube2(yellow);   Cylinder cyl(yellow); //声明对象并初始化
	if(TestSame(cube1, cyl))     	cout << "The color of cube1 and cyl are the same.\n"; 
	else     					cout << "The color of cube1 and cyl are different.\n"; 
	if(TestSame(cube2, cyl))     	cout << "The color of cube2 and cyl are the same.\n"; 
	else     					cout << "The color of cube2 and cyl are different.\n"; 
	return 0; 
}
