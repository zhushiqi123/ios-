#include <iostream>
#include <cmath>
using namespace std;
class Line;                       //ǰ����������
class Point
{     int x,y;
  public:
     Point (int x1,int y1) { x=x1; y=y1; }
     friend double dist(Line l,Point p);  		//������Ԫ����
};
class Line
{    int  a,b, c;
  public :
     Line(int a1,int b1,int c1)  {a=a1; b=b1; c=c1; }
     friend double dist (Line l,Point p) ;  		//������Ԫ����
};
double dist (Line l, Point p)		//��Ԫ����ʵ�����ڼ���㵽ֱ�ߵľ���
{   double d;  d=abs (l.a*p.x+l.b*p.y+l.c) / (sqrt (l.a*l.a+l.b*l.b) ) ; return d;}
int main()
{	Point p(5,5);	Line l(2,4,3);
	cout << "The distance is:"<< dist(l,p) << endl;
	return 0;
}
