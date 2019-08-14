#include <iostream> 
using namespace std; 
class Rectangle 
{	int width, height; 
public: 
	Rectangle()		//需要一个无参数的构造函数
	{	width = height = 0; 
		cout << "Constructing " << width << " by " << height << " rectangle.\n"; 
	} 
	Rectangle(int w, int h) 
	{	width = w;     height = h; 
		cout << "Constructing " << width << " by " << height << " rectangle.\n"; 
	} 
	~Rectangle() { cout << "Destructing " << width << " by " << height << " rectangle.\n"; }  
	void set(int w, int h) { width = w; height = h;  } //设置函数
	int area() { return width * height;   } 
}; 
int main() 
{	Rectangle *p; 
	p = new Rectangle [3]; 							//语句1：动态创建对象数组
	p[0].set(1, 2);  p[1].set(3, 4);  p[2].set(5, 6); 	//语句2：设置矩形的高和宽
	for(int i=0; i < 3; i++)  cout << "Area is " << p[i].area() << endl; 
	delete [] p; 									//语句3：释放对象数组
	return 0; 
} 
