#include <iostream> 
using namespace std; 
class Cylinder; 						    // ǰ���������� 
enum Colors { red, green, yellow }; 		    //����ö������
class Cube 
{	Colors color; 
public: 
	Cube(Colors c) { color= c; } 
	bool TestSame(Cylinder y); 			    //һ���Ա����
}; 
class Cylinder 
{	Colors color; 
public: 
	Cylinder(Colors c) { color = c; } 
	friend bool Cube::TestSame(Cylinder y) 	//��Ա������Ϊ��Ԫ����
	{ 	if(color == y.color) return true;  else return false; }
}; 
int main() 
{	Cube cube1(red),  cube2(yellow);   Cylinder cyl(yellow); //�������󲢳�ʼ��
	if(cube1.TestSame(cyl))     	cout << "The color of cube1 and cyl are the same.\n"; 
	else     					cout << "The color of cube1 and cyl are different.\n"; 
	if(cube2.TestSame(cyl))     	cout << "The color of cube2 and cyl are the same.\n"; 
	else     					cout << "The color of cube2 and cyl are different.\n"; 
	return 0; 
}
