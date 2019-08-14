#include <cmath>
#include <iostream>
using namespace std;
const double PI=3.14159265358979;
class Shape					//ÉùÃ÷³éÏó»ùÀà
{public:
  	virtual void Disp() = 0;
  	virtual float area() = 0;
};
class TwoDShape : public Shape	//³éÏóÅÉÉúÀàTwoDShape
{public:
  	virtual float perimeter() = 0;
};
class ThreeDShape : public Shape	//³éÏóÅÉÉúÀàThreeDShape 
{public:
  	virtual float volume() = 0;
};
class Circle : public TwoDShape
{public:
  	Circle(float r) : radius(r) { }
  	void Disp() { cout << "Shape is a circle.\n"; }
  	float perimeter() { return 2*PI*radius; }
  	float area() { return PI*radius*radius; }
private:
  	float radius;
};
class Rectangle : public TwoDShape
{public:
  	Rectangle(float l, float w) : length(l),width(w) { }
  	void Disp() { cout << "Shape is a Rectangle.\n"; }
  	float perimeter() { return 2*(length+width); }
  	float area() { return length*width; }
private:
  	float length,width;
};
class Cone : public ThreeDShape
{public:
  	Cone(float r, float h) : radius(r), height(h) { }
  	void Disp() { cout << "Shape is a Cone.\n"; }
  	float area(){return PI*radius*(radius+sqrt(radius*radius + height*height));}
  	float volume() { return PI*radius*radius*height/3; }
private:
  	float radius, height;
};
class Box : public ThreeDShape
{public:
  	Box(float l, float w,float h) : length(l),width(w), height(h) { }
  	void Disp() { cout << "Shape is a Box.\n"; }
  	float area(){return 2*(length*width+length*height+width*height);}
  	float volume() { return length*width*height; }
private:
  	float length,width, height;
};
int main()
{	Shape *ShapePtr=0;
	Circle c(2);
	ShapePtr=&c;	ShapePtr->Disp();
	//cout<<ShapePtr->perimeter();//Óï¾ä1£º±àÒë´íÎó
	cout<<ShapePtr->area()<<"\n";
	Rectangle r(2,3);
	ShapePtr=&r;	ShapePtr->Disp();
	//cout<<ShapePtr->perimeter();//Óï¾ä2£º±àÒë´íÎó
	cout<<ShapePtr->area()<<"\n";
	Cone co(1, 2);
	ShapePtr=&co;	ShapePtr->Disp();
	//cout<<ShapePtr->perimeter();//Óï¾ä3£º±àÒë´íÎó
	cout<<ShapePtr->area()<<"\n";
	Box b(1, 2,3);
	ShapePtr=&b;	ShapePtr->Disp();
	//cout<<ShapePtr->perimeter();//Óï¾ä4£º±àÒë´íÎó
	cout<<ShapePtr->area()<<"\n";
	return 0;
}
