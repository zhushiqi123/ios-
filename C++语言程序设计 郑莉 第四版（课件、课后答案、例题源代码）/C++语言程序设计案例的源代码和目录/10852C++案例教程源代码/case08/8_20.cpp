#include <iostream> 
#include <string> 
using namespace std; 
class TwoDShape  // 二维图形类.
{ 	double width, height; 
  	char name[20]; 
public: 
  	TwoDShape() { width = height = 0.0;   strcpy(name, "unknown");} // 默认构造函数
  	TwoDShape(double w, double h, char *n) {width = w;  height = h;  strcpy(name, n); } 
  	TwoDShape(double x, char *n)   { width = height = x;     strcpy(name, n);   } 
  	void showDim() {cout<<"Width and height are "<<width<< " and " << height << "\n";}
	double getWidth() { return width; } 
  	double getHeight() { return height; } 
  	void setWidth(double w) { width = w; } 
  	void setHeight(double h) { height = h; } 
  	char *getName() { return name; } 
  	virtual double area() = 0;  			// area()是纯虚函数 
}; 
class Triangle : public TwoDShape // Triangle 从 TwoDShape派生
{ 	char style[20]; 
public: 
  	Triangle()   {strcpy(style, "unknown"); } 
  	Triangle(char *str, double w,double h) :TwoDShape(w, h, "triangle") 
     {strcpy(style, str); } 
  	Triangle(double x) : TwoDShape(x, "triangle")  
     { strcpy(style, "isosceles");} 
  	double area(){  return getWidth() * getHeight() / 2;   } //语句1
  	void showStyle()   
     { cout << "Triangle is " << style << "\n";   } 
}; 
class Rectangle : public TwoDShape 
{ public: 
  	Rectangle(double w, double h) :  TwoDShape(w, h, "rectangle") { }  
  	Rectangle(double x) :  TwoDShape(x, "rectangle") { }  
  	bool isSquare()  
     {  if(getWidth() == getHeight()) return true;   return false;   } 
  	double area(){  return getWidth() * getHeight();   } // 语句2
      
}; 
int main() 
{ 	TwoDShape *shapes[4];   	// 声明TwoDShape对象指针数组. 
  	shapes[0] = new Triangle("right", 8.8, 12.4);    
	shapes[1] = new Rectangle(20);  
  	shapes[2] = new Rectangle(20, 8);    
	shapes[3] = new Triangle(8.0);  
  	for(int i=0; i < 4; i++) 
	{  	cout << "object is " <<shapes[i]->getName() << "\n";  
     	cout << "Area is " <<shapes[i]->area() << "\n";  
  	}  
  	return 0; 
}
