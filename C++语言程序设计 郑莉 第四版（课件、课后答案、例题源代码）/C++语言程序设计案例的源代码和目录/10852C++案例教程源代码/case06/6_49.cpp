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
	p = new Rectangle(10, 20); //���1����һ���������������ڴ棬���ù��캯��
	cout << "Area is " << p->area()<<endl; //���2�����ó�Ա����area()
	delete p; 						  //���3���ͷŶ��󣬵�����������
	return 0; 
} 
