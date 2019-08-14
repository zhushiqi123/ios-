#include <iostream> 
using namespace std; 
class Rectangle 
{	int width, height; 
public: 
	Rectangle(int w, int h) 
	{	width = w;   height = h; 
		cout << "Constructing " << width << " by " << height << " rectangle.\n"; 
	} 
	~Rectangle() {cout<<"Destructing "<< width << " by " << height << " rectangle.\n";   }  
	int area() {  return width * height;  } 
}; 
int main() 
{	Rectangle *p; 
	p = new Rectangle(10, 20); //语句1：给一个矩形类对象分配内存，调用构造函数
	cout << "Area is " << p->area()<<endl; //语句2：调用成员函数area()
	delete p; 						  //语句3：释放对象，调用析构函数
	return 0; 
} 
