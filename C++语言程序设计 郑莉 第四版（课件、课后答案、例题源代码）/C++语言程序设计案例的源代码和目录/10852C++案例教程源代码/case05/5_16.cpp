#include<iostream>
#include<iomanip>
using namespace std;
class Line
{	double x1,x2,y1, y2;
  public:
    Line(){};
    Line(double a,double b,double c,double d)
    {  x1=a;y1=b; x2=c; y2=d;
		   cout<<"�߶ζ˵㣺("<<x1<<","<<y1<<")-("<<x2<<","<<y2<<")"<<endl;
    };
    friend twoline(Line l1,Line l2)		//������Ԫ����
    {  double r1=l2.y1*(l2.x2-l1.x1)-l1.y1*(l2.x2-l2.x1)+(l1.x1-l2.x1)*(l2.y2-l2.y1);
       double r2=(l1.y2-l1.y1)*(l2.x2-l2.x1)-(l1.x2-l1.x1)*(l2.y2-l2.y1);
       double r=r1/r2;    double t=((l1.x1-l2.x1)+r*(l1.x2-l1.x1))/(l2.x2-l2.x1);
       if(r>0&&r<1&&t>0&&t<1)		cout<<"���߶��ཻ"<<endl;
       else if  (r>0&&r<1&&t>=1)		cout<<"���߶β��ཻ��һ������һ����һ��\n";
       else if((r>=1 ||r<=0)&&t>0&&t<1) cout<<"���߶β��ཻ��һ������һ����һ��\n";
       else							cout<<"���߶β��ཻ��"<<endl;
    }
};
void main()	{ Line A(2,2,18,18),B(1,12,19,5);  twoline(A,B);}
