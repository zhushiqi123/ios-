#include <iostream> 
using namespace std; 
class Cylinder; 						    // 前向引用声明 
enum Colors { red, green, yellow }; 		    //定义枚举类型
class Cube 
{	Colors color; 
public: 
	Cube(Colors c) { color= c; } 
	bool TestSame(Cylinder y); 			    //一般成员函数
}; 
class Cylinder 
{	Colors color; 
public: 
	Cylinder(Colors c) { color = c; } 
	friend bool Cube::TestSame(Cylinder y) 	//成员函数作为友元函数
	{ 	if(color == y.color) return true;  else return false; }
}; 
int main() 
{	Cube cube1(red),  cube2(yellow);   Cylinder cyl(yellow); //声明对象并初始化
	if(cube1.TestSame(cyl))     	cout << "The color of cube1 and cyl are the same.\n"; 
	else     					cout << "The color of cube1 and cyl are different.\n"; 
	if(cube2.TestSame(cyl))     	cout << "The color of cube2 and cyl are the same.\n"; 
	else     					cout << "The color of cube2 and cyl are different.\n"; 
	return 0; 
}
