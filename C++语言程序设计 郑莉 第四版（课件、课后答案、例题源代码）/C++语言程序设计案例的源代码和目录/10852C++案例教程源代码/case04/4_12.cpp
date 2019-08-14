#include <iostream>
#include <cmath>
using namespace std;
class Point						//Point类声明
{ 	int X,Y;
public:
	Point(int xx=0, int yy=0) {X=xx;Y=yy;}
	Point(Point &p) {X=p.X;	Y=p.Y;	cout<<"Point拷贝构造函数被调用"<<endl;}
	int GetX() {return X;}
	int GetY() {return Y;}
};
class Triangle					//Triangle类的声明
{public:							//外部接口
	Triangle (Point xp1, Point xp2, Point xp3);
	Triangle (Triangle &);
	double GetLen(){return len;}
private:							//私有数据成员
	Point p1,p2,p3;					//内嵌对象：Point类的对象p1,p2,p3
	double len;	
};
//组合类的构造函数
Triangle:: Triangle (Point xp1, Point xp2, Point xp3):p1(xp1),p2(xp2),p3(xp3)
{	cout<<"Triangle构造函数被调用"<<endl;
	double x1=double(p1.GetX()-p2.GetX());	double y1=double(p1.GetY()-p2.GetY());
	double len1=sqrt(x1*x1+y1*y1);
	double x2=double(p2.GetX()-p3.GetX());	double y2=double(p2.GetY()-p3.GetY());
	double len2=sqrt(x2*x2+y2*y2);
	double x3=double(p3.GetX()-p1.GetX());	double y3=double(p3.GetY()-p1.GetY());
	double len3=sqrt(x3*x3+y3*y3);
	len=len1+len2+len3;
}
//组合类的拷贝构造函数
Triangle:: Triangle (Triangle &Tri): p1(Tri.p1), p2(Tri.p2), p3(Tri.p3)
{	cout<<"Triangle拷贝构造函数被调用"<<endl;	len=Tri.len;}
int main()
{	Point myp1(1,1),myp2(2,3),myp3(4,5);	//建立Point类的对象
	Triangle Triangle1(myp1,myp2,myp3);	//建立Triangle类的对象
	Triangle Triangle2(Triangle1);		//利用拷贝构造函数建立一个新对象
	cout<<"The circumference length of the Triangle is:" <<Triangle1.GetLen()<<endl;
	cout<<"The length of the Triangle2 is:" <<Triangle2.GetLen()<<endl;
	return 0;
}
