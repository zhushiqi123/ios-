#include <iostream> 
using namespace std; 
class Cylinder; 						   // ǰ���������� 
enum Colors { red, green, yellow }; 		   //������ɫö������
class Cube 
{ 	Colors color; 
public: 
	Cube(Colors c) { color = c; } 
	friend bool TestSame(Cube x, Cylinder y); //����ΪCube����Ԫ����
}; 
class Cylinder 
{ 	Colors color; 
public: 
	Cylinder(Colors c) { color= c; } 
	friend bool TestSame(Cube x, Cylinder y); //����ΪCylinder����Ԫ����
}; 
bool TestSame(Cube x, Cylinder y) { if(x.color == y.color) return true;   else return false; }  
int main() 
{	Cube cube1(red),  cube2(yellow);   Cylinder cyl(yellow); //�������󲢳�ʼ��
	if(TestSame(cube1, cyl))     	cout << "The color of cube1 and cyl are the same.\n"; 
	else     					cout << "The color of cube1 and cyl are different.\n"; 
	if(TestSame(cube2, cyl))     	cout << "The color of cube2 and cyl are the same.\n"; 
	else     					cout << "The color of cube2 and cyl are different.\n"; 
	return 0; 
}
