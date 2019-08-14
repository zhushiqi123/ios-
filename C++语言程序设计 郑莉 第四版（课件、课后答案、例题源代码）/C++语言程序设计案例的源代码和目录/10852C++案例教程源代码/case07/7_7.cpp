#include <iostream> 
#include <cstring> 
using namespace std; 
class TwoDShape // ��άͼ���� 
{	double width,height; 
public: 
	TwoDShape(double w, double h) { width = w;  height = h;   } //���캯��.
	void showDim() {cout << "Width and height are "<<width<<" and " << height << "\n"; } 
	double getWidth() { return width; } 
	double getHeight() { return height; } 
	void setWidth(double w) { width = w; } 
	void setHeight(double h) { height = h; } 
}; 
class Triangle : public TwoDShape // Triangle�������� TwoDShape. 
{	char style[20]; // ˽�г�Ա
public: 
	Triangle(char *str, double w, double h) : TwoDShape(w, h) {strcpy(style, str); }  
	double area() { return getWidth() * getHeight() / 2;  } 
	void showStyle() {cout << "Triangle is " << style << "\n";  } 
}; 
class CTriangle : public Triangle  // ��չ Triangle. 
{	char color[20]; 
public: 
	CTriangle(char *clr, char *style, double w, double h) : Triangle(style, w, h) 
	{   strcpy(color, clr);  } 
	void showColor() {cout << "Color is " << color << "\n"; } // ��ʾ��ɫ.
}; 
int main() 
{	CTriangle ct("Blue", "right", 7.0, 12.0); 
	cout << "Info for CTriangle: "; 
	ct.showStyle();   ct.showDim();   ct.showColor(); 
	cout << "Area is " << ct.area() << endl; 
	return 0; 
}
