#include <iostream>
#include <iomanip>
using namespace std;
class Point 
{public:
	Point( int xValue = 0, int yValue = 0 ) : x( xValue ), y( yValue ){}; //默认构造函数
	void setX ( int xValue )		{ x = xValue; }  	//设置x 坐标
	int getX() const			{ return x;}  		//获取x坐标
	void setY( int yValue )		{ y = yValue; }  		//设置y 坐标
	int getY() const			{ return y;}  		//获取y坐标
	void Disp() const  {cout << '[' << getX() << ", " << getY() << ']';};
private: 
	int x,y;  									// x,y 坐标
}; 
class Circle : public Point 						//圆类
{public:
	Circle( int xValue= 0, int yValue= 0, double radiusValue= 0.0) : Point( xValue, yValue ) 
	{   setRadius( radiusValue );}
	void setRadius( double radiusValue ) 							//设置半径
	{	radius = ( radiusValue < 0.0 ? 0.0 : radiusValue );} 
	double getRadius() const{   return radius;}  					//获取半径
	double getDiameter() const{   return 2 * getRadius();}       	//获取直径
	double getCircumference() const{   return 3.14159 * getDiameter();} //获取周长
	double getArea() const{   return 3.14159 * getRadius() * getRadius();} //获取面积
	void Disp() const         				//输出圆对象
	{	cout << "center = ";  Point::Disp(); 	//调用Point类的Disp函数
		cout << "; radius = " << getRadius();
	}
private: 
	double radius;  // 圆半径
}; 
int main()
{  Point point( 30, 50 );
   Point *pointPtr = 0;    // 基类指针
   Circle circle( 120, 89, 2.7 );
   Circle *circlePtr = 0;  //派生类指针
   pointPtr = &circle;
   int x=pointPtr->getX();  
   int y=pointPtr->getY();  
   double r=pointPtr->getRadius();//错误
   double d=pointPtr->getDiameter();//错误
   cout << endl;
   return 0;
} 

