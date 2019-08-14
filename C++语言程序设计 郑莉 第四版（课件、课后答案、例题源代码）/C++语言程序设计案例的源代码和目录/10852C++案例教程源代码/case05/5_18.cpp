#include <iostream>
#include <cmath>
using namespace std;
class Line;                       //前向引用声明
class Point
{     int x,y;
  public:
     Point (int x1,int y1) { x=x1; y=y1; }
     friend double dist(Line l,Point p);  		//声明友元函数
};
class Line
{    int  a,b, c;
  public :
     Line(int a1,int b1,int c1)  {a=a1; b=b1; c=c1; }
     friend double dist (Line l,Point p) ;  		//声明友元函数
};
double dist (Line l, Point p)		//友元函数实现用于计算点到直线的距离
{   double d;  d=abs (l.a*p.x+l.b*p.y+l.c) / (sqrt (l.a*l.a+l.b*l.b) ) ; return d;}
int main()
{	Point p(5,5);	Line l(2,4,3);
	cout << "The distance is:"<< dist(l,p) << endl;
	return 0;
}
