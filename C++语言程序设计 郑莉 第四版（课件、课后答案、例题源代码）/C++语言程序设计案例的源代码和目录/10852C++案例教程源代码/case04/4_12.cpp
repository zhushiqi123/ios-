#include <iostream>
#include <cmath>
using namespace std;
class Point						//Point������
{ 	int X,Y;
public:
	Point(int xx=0, int yy=0) {X=xx;Y=yy;}
	Point(Point &p) {X=p.X;	Y=p.Y;	cout<<"Point�������캯��������"<<endl;}
	int GetX() {return X;}
	int GetY() {return Y;}
};
class Triangle					//Triangle�������
{public:							//�ⲿ�ӿ�
	Triangle (Point xp1, Point xp2, Point xp3);
	Triangle (Triangle &);
	double GetLen(){return len;}
private:							//˽�����ݳ�Ա
	Point p1,p2,p3;					//��Ƕ����Point��Ķ���p1,p2,p3
	double len;	
};
//�����Ĺ��캯��
Triangle:: Triangle (Point xp1, Point xp2, Point xp3):p1(xp1),p2(xp2),p3(xp3)
{	cout<<"Triangle���캯��������"<<endl;
	double x1=double(p1.GetX()-p2.GetX());	double y1=double(p1.GetY()-p2.GetY());
	double len1=sqrt(x1*x1+y1*y1);
	double x2=double(p2.GetX()-p3.GetX());	double y2=double(p2.GetY()-p3.GetY());
	double len2=sqrt(x2*x2+y2*y2);
	double x3=double(p3.GetX()-p1.GetX());	double y3=double(p3.GetY()-p1.GetY());
	double len3=sqrt(x3*x3+y3*y3);
	len=len1+len2+len3;
}
//�����Ŀ������캯��
Triangle:: Triangle (Triangle &Tri): p1(Tri.p1), p2(Tri.p2), p3(Tri.p3)
{	cout<<"Triangle�������캯��������"<<endl;	len=Tri.len;}
int main()
{	Point myp1(1,1),myp2(2,3),myp3(4,5);	//����Point��Ķ���
	Triangle Triangle1(myp1,myp2,myp3);	//����Triangle��Ķ���
	Triangle Triangle2(Triangle1);		//���ÿ������캯������һ���¶���
	cout<<"The circumference length of the Triangle is:" <<Triangle1.GetLen()<<endl;
	cout<<"The length of the Triangle2 is:" <<Triangle2.GetLen()<<endl;
	return 0;
}
